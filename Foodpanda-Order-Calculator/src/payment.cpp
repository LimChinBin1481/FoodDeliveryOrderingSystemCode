#include "order.h"
#include <iostream>
#include <iomanip>
std::string selectPayment() {
    heading("PAYMENT METHOD");
    std::cout << "1. Cash on Delivery\n2. Debit/Credit Card (simulation)\n3. E-Wallet (simulation)\n";
    switch(readInt("Choose payment (1-3): ",1,3)) {
        case 1: return "Cash on Delivery";
        case 2: return "Debit/Credit Card (simulation)";
        default: return "E-Wallet (simulation)";
    }
}
double orderSubtotal(const Order& order) {
    double sum=0;
    for (const auto& item:order.items) sum+=item.subtotal;
    return sum;
}
void printSummary(const Order& order) {
    heading("ORDER SUMMARY");
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Restaurant: " << order.restaurant << "\n";
    for (const auto& item:order.items)
        std::cout << item.food.name << " x" << item.quantity << " = RM " << item.subtotal << "\n";
    std::cout << "Food subtotal: RM " << orderSubtotal(order) << "\n"
              << "Distance: " << order.distance << " km\n"
              << "Delivery fee: RM " << order.deliveryFee << "\n"
              << "-------------------------------\n"
              << "TOTAL: RM " << orderSubtotal(order)+order.deliveryFee << "\n"
              << "Payment: " << order.payment << "\n";
}
