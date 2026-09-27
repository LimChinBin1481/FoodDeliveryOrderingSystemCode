#include "order.h"
#include <iostream>
#include <iomanip>
int selectFood(const Restaurant& restaurant) {
    heading("FOOD MENU - " + restaurant.name);
    for (size_t i=0;i<restaurant.menu.size();++i)
        std::cout << i+1 << ". " << std::left << std::setw(22) << restaurant.menu[i].name
                  << "RM " << std::fixed << std::setprecision(2) << restaurant.menu[i].price << "\n";
    std::cout << "0. Finish selecting food\n";
    return readInt("Select food (0 to finish): ",0,static_cast<int>(restaurant.menu.size()));
}
