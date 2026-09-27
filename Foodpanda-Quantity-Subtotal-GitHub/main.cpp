#include <iostream>
#include <iomanip>
#include <limits>
#include "quantity.h"

using namespace std;

int main()
{
    string foodName;
    double foodPrice;

    cout << "========================================\n";
    cout << "       FOODPANDA ORDER CALCULATOR\n";
    cout << "       Quantity & Subtotal Module\n";
    cout << "========================================\n";

    cout << "\nEnter food name: ";
    getline(cin, foodName);

    while (foodName.empty())
    {
        cout << "Food name cannot be empty. Enter food name: ";
        getline(cin, foodName);
    }

    cout << "Enter food price (RM): ";
    cin >> foodPrice;

    while (cin.fail() || foodPrice <= 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid price. Enter a value greater than 0: ";
        cin >> foodPrice;
    }

    int quantity = getQuantity();
    double subtotal = calculateSubtotal(foodPrice, quantity);

    displaySubtotal(foodName, foodPrice, quantity, subtotal);

    cout << "\nCalculation completed successfully.\n";
    return 0;
}
