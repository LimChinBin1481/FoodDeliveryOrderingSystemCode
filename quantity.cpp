#include "quantity.h"
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

double calculateSubtotal(double foodPrice, int quantity)
{
    return foodPrice * quantity;
}

int getQuantity()
{
    int quantity;

    while (true)
    {
        cout << "Enter quantity: ";
        cin >> quantity;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a whole number.\n";
        }
        else if (quantity <= 0)
        {
            cout << "Quantity must be greater than 0.\n";
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return quantity;
        }
    }
}

void displaySubtotal(const string& foodName,
                     double foodPrice,
                     int quantity,
                     double subtotal)
{
    cout << "\n========================================\n";
    cout << "       QUANTITY & SUBTOTAL\n";
    cout << "========================================\n";
    cout << left << setw(20) << "Food" << ": " << foodName << '\n';
    cout << left << setw(20) << "Price" << ": RM "
         << fixed << setprecision(2) << foodPrice << '\n';
    cout << left << setw(20) << "Quantity" << ": " << quantity << '\n';
    cout << "----------------------------------------\n";
    cout << left << setw(20) << "Subtotal" << ": RM "
         << fixed << setprecision(2) << subtotal << '\n';
    cout << "========================================\n";
}
