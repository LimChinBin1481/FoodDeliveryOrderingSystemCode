#include "order.h"
#include <stdexcept>
// Illustrative delivery pricing, NOT official foodpanda rates.
double calculateDeliveryFee(double distance) {
    if (distance < 0 || distance > 100) throw std::invalid_argument("Invalid delivery distance");
    if (distance <= 5) return 3.00;
    if (distance <= 10) return 5.00;
    return 8.00;
}
double getDeliveryDistance() {
    heading("DELIVERY CALCULATOR");
    return readDouble("Enter distance in km (0-100): ",0,100);
}
