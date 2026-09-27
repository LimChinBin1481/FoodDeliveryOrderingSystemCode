#ifndef QUANTITY_H
#define QUANTITY_H

#include <string>

double calculateSubtotal(double foodPrice, int quantity);
int getQuantity();
void displaySubtotal(const std::string& foodName,
                     double foodPrice,
                     int quantity,
                     double subtotal);

#endif
