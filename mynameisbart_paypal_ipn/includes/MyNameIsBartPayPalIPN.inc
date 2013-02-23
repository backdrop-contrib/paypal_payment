<?php

/**
 * Contains class MyNameIsBartPayPalIPN.
 */

/**
 * A PayPal IPN.
 *
 * @see MyNameIsBartPayPalIPNController
 * @see mynameisbart_paypal_schema()
 */
class MyNameIsBartPayPalIPN {

  /**
   * The PID of the Payment this IPN is for.
   *
   * @see MyNameIsBartPayPalIPNController::invoiceID()
   * @see MyNameIsBartPayPalIPNController::PID()
   *
   * @var string
   */
  public $pid = 0;

  /**
   * The PayPal transaction ID.
   *
   * @var string
   */
  public $txn_id = '';

  /**
   * Constructor.
   */
  function __construct(array $properties = array()) {
    foreach ($properties as $property => $value) {
      $this->$property = $value;
    }
  }
}