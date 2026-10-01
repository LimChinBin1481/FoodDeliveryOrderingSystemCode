#include "restaurant.h"
#include <iostream>
#include <limits>

using namespace std;

int selectRestaurant()
{
    int choice;

    while (true)
    {
        cout << "\n========================================\n";
        cout << "          SELECT RESTAURANT\n";
        cout << "========================================\n";
        cout << "1. Burger House\n";
        cout << "2. Pizza Corner\n";
        cout << "3. Chicken Kitchen\n";
        cout << "========================================\n";
        cout << "Enter restaurant choice: ";

        cin >> choice;

        if (!cin.fail() && choice >= 1 && choice <= 3)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return choice;
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice. Please select 1 to 3.\n";
    }
}

string getRestaurantName(int choice)
{
    switch (choice)
    {
        case 1:
            return "Burger House";

        case 2:
            return "Pizza Corner";

        case 3:
            return "Chicken Kitchen";

        default:
            return "Unknown";
    }
}