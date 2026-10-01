#include <iostream>

#include "restaurant.h"
#include "food.h"
#include "quantity.h"
#include "delivery.h"
#include "payment.h"
#include "validation.h"

using namespace std;

int main()
{
    bool orderAgain;

    cout << "========================================\n";
    cout << "       FOOD DELIVERY ORDERING SYSTEM\n";
    cout << "========================================\n";
    cout << "Welcome to our Food Delivery System!\n";

    do
    {
        // MEMBER 1
        int restaurantChoice = selectRestaurant();
        string restaurantName =
            getRestaurantName(restaurantChoice);

        // MEMBER 2
        string foodName;
        double foodPrice;

        selectFood(
            restaurantChoice,
            foodName,
            foodPrice
        );

        // MEMBER 3 - GROUPMATE'S EXISTING CODE
        int quantity = getQuantity();

        double subtotal =
            calculateSubtotal(foodPrice, quantity);

        displaySubtotal(
            foodName,
            foodPrice,
            quantity,
            subtotal
        );

        // MEMBER 4
        double distance = getDistance();

        double deliveryFee =
            calculateDeliveryFee(distance);

        displayDelivery(
            distance,
            deliveryFee
        );

        // MEMBER 5
        string paymentMethod =
            selectPaymentMethod();

        displayOrderSummary(
            restaurantName,
            foodName,
            foodPrice,
            quantity,
            subtotal,
            deliveryFee,
            paymentMethod
        );

        // MEMBER 6
        orderAgain = askOrderAgain();

    } while (orderAgain);

    cout << "\n========================================\n";
    cout << "Thank you for using our Food Delivery System!\n";
    cout << "========================================\n";

    return 0;
}