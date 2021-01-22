//#if __has_include(<Braintree/BraintreePayPal.h>)
//#import <Braintree/BraintreeCore.h>
//#else
//#import <BraintreeCore/BraintreeCore.h>
//#endif
#import "BTPostalAddress.h"

@class BTPayPalCreditFinancing;

/**
 Contains information about a PayPal payment method
 */
@interface BTPayPalAccountNonce : BTPaymentMethodNonce

/**
 Payer's email address.
*/
@property (nonatomic, nullable, readonly, copy) NSString *email;

/**
 Payer's first name.
*/
@property (nonatomic, nullable, readonly, copy) NSString *firstName;

/**
 Payer's last name.
*/
@property (nonatomic, nullable, readonly, copy) NSString *lastName;

/**
 Payer's phone number.
*/
@property (nonatomic, nullable, readonly, copy) NSString *phone;

/**
 The billing address.
*/
@property (nonatomic, nullable, readonly, strong) BTPostalAddress *billingAddress;

/**
 The shipping address.
*/
@property (nonatomic, nullable, readonly, strong) BTPostalAddress *shippingAddress;

/**
 Client metadata id associated with this transaction.
*/
@property (nonatomic, nullable, readonly, copy) NSString *clientMetadataId;

/**
 Optional. Payer id associated with this transaction.

 Will be provided for Billing Agreement and Checkout.
*/
@property (nonatomic, nullable, readonly, copy) NSString *payerId;

/**
 Optional. Credit financing details if the customer pays with PayPal Credit.

 Will be provided for Billing Agreement and Checkout.
 */
@property (nonatomic, nullable, readonly, strong) BTPayPalCreditFinancing *creditFinancing;

@end
