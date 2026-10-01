#include "food.h"
#include <iostream>
#include <limits>

using namespace std;

void selectFood(int restaurantChoice,
                string& foodName,
                double& foodPrice)
{
    int choice;

    while (true)
    {
        cout << "\n========================================\n";
        cout << "              FOOD MENU\n";
        cout << "========================================\n";

        if (restaurantChoice == 1)
        {
            cout << "1. Chicken Burger     RM 12.00\n";
            cout << "2. Beef Burger        RM 15.00\n";
            cout << "3. Burger Set         RM 18.00\n";
        }
        else if (restaurantChoice == 2)
        {
            cout << "1. Chicken Pizza      RM 20.00\n";
            cout << "2. Pepperoni Pizza    RM 25.00\n";
            cout << "3. Hawaiian Pizza     RM 23.00\n";
        }
        else
        {
            cout << "1. Fried Chicken      RM 10.00\n";
            cout << "2. Chicken Rice       RM 12.00\n";
            cout << "3. Chicken Set        RM 17.00\n";
        }

        cout << "========================================\n";
        cout << "Enter food choice: ";
        cin >> choice;

        if (!cin.fail() && choice >= 1 && choice <= 3)
        {
            break;
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid food choice. Please try again.\n";
    }

    if (restaurantChoice == 1)
    {
        switch (choice)
        {
            case 1:
                foodName = "Chicken Burger";
                foodPrice = 12.00;
                break;

            case 2:
                foodName = "Beef Burger";
                foodPrice = 15.00;
                break;

            case 3:
                foodName = "Burger Set";
                foodPrice = 18.00;
                break;
        }
    }
    else if (restaurantChoice == 2)
    {
        switch (choice)
        {
            case 1:
                foodName = "Chicken Pizza";
                foodPrice = 20.00;
                break;

            case 2:
                foodName = "Pepperoni Pizza";
                foodPrice = 25.00;
                break;

            case 3:
                foodName = "Hawaiian Pizza";
                foodPrice = 23.00;
                break;
        }
    }
    else
    {
        switch (choice)
        {
            case 1:
                foodName = "Fried Chicken";
                foodPrice = 10.00;
                break;

            case 2:
                foodName = "Chicken Rice";
                foodPrice = 12.00;
                break;

            case 3:
                foodName = "Chicken Set";
                foodPrice = 17.00;
                break;
        }
    }
}