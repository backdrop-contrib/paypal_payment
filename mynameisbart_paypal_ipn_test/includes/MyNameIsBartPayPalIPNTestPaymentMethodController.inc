<?php

/**
 * Contains MyNameIsBartPayPalIPNTestPaymentMethodController.
 */

/**
 * A dummy class that simply implements MyNameIsBartPayPalIPNPaymentMethodControllerInterface.
 */
class MyNameIsBartPayPalIPNTestPaymentMethodController extends PaymentMethodController implements MyNameIsBartPayPalIPNPaymentMethodControllerInterface {

  function __construct() {
    $this->title = __CLASS__;
  }

  /**
   * Implements MyNameIsBartPayPalIPNPaymentMethodControllerInterface::PayPalValidateIPNVariables().
   */
  static function PayPalValidateIPNVariables(Payment $payment, array $ipn_variables) {
    return TRUE;
  }

  /**
   * Implements MyNameIsBartPayPalIPNPaymentMethodControllerInterface::PayPalProcessIPN().
   */
  static function PayPalProcessIPN(Payment $payment, array $ipn_variables) {
  }
}