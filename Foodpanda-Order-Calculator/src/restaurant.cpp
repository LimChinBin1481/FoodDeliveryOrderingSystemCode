#include "order.h"
#include <iostream>
std::vector<Restaurant> getRestaurants() {
    // Fictional sample restaurants and prices for classroom demonstration.
    return {
        {"Panda Burger", {{"Chicken Burger",15.00},{"Beef Burger",18.00},{"French Fries",6.00}}},
        {"Panda Pizza", {{"Margherita Pizza",20.00},{"Pepperoni Pizza",25.00},{"Garlic Bread",8.00}}},
        {"Panda Local", {{"Nasi Lemak",10.00},{"Fried Rice",12.00},{"Chicken Rice",13.00}}}
    };
}
int selectRestaurant(const std::vector<Restaurant>& restaurants) {
    heading("RESTAURANT SELECTION");
    for (size_t i=0;i<restaurants.size();++i) std::cout << i+1 << ". " << restaurants[i].name << "\n";
    return readInt("Choose restaurant (1-3): ",1,static_cast<int>(restaurants.size()))-1;
}
