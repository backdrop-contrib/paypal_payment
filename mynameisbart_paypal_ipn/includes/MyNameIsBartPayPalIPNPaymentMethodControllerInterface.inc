<?php

/**
 * Contains interface MyNameIsBartPayPalIPNPaymentMethodControllerInterface.
 */

/**
 * Provides IPN for payment methods.
 */
interface MyNameIsBartPayPalIPNPaymentMethodControllerInterface {

  /**
   * Validates IPN message variables for a payment.
   *
   * @param Payment $payment
   * @param array $ipn_variables
   *
   * @return bool
   *   Whether the IPN variables are valid.
   */
  static function PayPalValidateIPNVariables(Payment $payment, array $ipn_variables);

  /**
   * Processes an IPN for a payment.
   *
   * @param Payment $payment
   * @param array $ipn_variables
   *
   * @return NULL
   */
  static function PayPalProcessIPN(Payment $payment, array $ipn_variables);
}
