#include "order.h"
#include <stdexcept>
// Member 3: Quantity & Subtotal Calculation.
double calculateSubtotal(double price, int quantity) {
    if (price < 0 || quantity < 1 || quantity > 100) throw std::invalid_argument("Invalid price or quantity");
    return price * quantity;
}
OrderItem makeOrderItem(const Food& food, int quantity) {
    return {food, quantity, calculateSubtotal(food.price,quantity)};
}
