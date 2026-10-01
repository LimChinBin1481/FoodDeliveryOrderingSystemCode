#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

std::string selectPaymentMethod();

void displayOrderSummary(
    const std::string& restaurantName,
    const std::string& foodName,
    double foodPrice,
    int quantity,
    double subtotal,
    double deliveryFee,
    const std::string& paymentMethod
);

#endif