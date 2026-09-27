#include "order.h"
#include <iostream>
#include <iomanip>
int main() {
    std::cout << std::fixed << std::setprecision(2);
    const auto restaurants=getRestaurants();
    heading("FOODPANDA-INSPIRED ORDER CALCULATOR");
    std::cout << "Educational demo only: sample restaurants, prices and delivery rates.\n"
              << "No actual orders or payments are processed.\n";
    while (true) {
        heading("MAIN MENU");
        std::cout << "1. Order food\n2. View restaurants\n0. Exit\n";
        int action=readInt("Choose option: ",0,2);
        if (action==0) break;
        if (action==2) {
            for (const auto& r:restaurants) {
                heading(r.name);
                for (const auto& f:r.menu) std::cout << f.name << " - RM " << f.price << "\n";
            }
            continue;
        }
        int r=selectRestaurant(restaurants);
        Order order; order.restaurant=restaurants[r].name;
        while (true) {
            int choice=selectFood(restaurants[r]);
            if (choice==0) {
                if (order.items.empty()) { std::cout << "Add at least one food item first.\n"; continue; }
                break;
            }
            int qty=readInt("Enter quantity (1-100): ",1,100);
            auto item=makeOrderItem(restaurants[r].menu[choice-1],qty);
            order.items.push_back(item);
            std::cout << "Added: " << item.food.name << " x" << qty << " | RM " << item.subtotal << "\n";
        }
        order.distance=getDeliveryDistance();
        order.deliveryFee=calculateDeliveryFee(order.distance);
        std::cout << "Delivery fee: RM " << order.deliveryFee << "\n";
        order.payment=selectPayment();
        printSummary(order);
        if (readYesNo("Confirm order? (Y/N): ")=='Y')
            std::cout << "Order confirmed (simulation only). Thank you!\n";
        else std::cout << "Order cancelled.\n";
        if (readYesNo("Place another order? (Y/N): ")=='N') break;
    }
    std::cout << "Goodbye!\n";
}
