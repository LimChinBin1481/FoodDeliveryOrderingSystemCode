#include "payment.h"
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

string selectPaymentMethod()
{
    int choice;

    while (true)
    {
        cout << "\n========================================\n";
        cout << "            PAYMENT METHOD\n";
        cout << "========================================\n";
        cout << "1. Cash\n";
        cout << "2. Credit/Debit Card\n";
        cout << "3. E-Wallet\n";
        cout << "========================================\n";
        cout << "Enter payment choice: ";

        cin >> choice;

        if (!cin.fail() && choice >= 1 && choice <= 3)
        {
            switch (choice)
            {
                case 1:
                    return "Cash";

                case 2:
                    return "Credit/Debit Card";

                case 3:
                    return "E-Wallet";
            }
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid payment method. Please try again.\n";
    }
}

void displayOrderSummary(
    const string& restaurantName,
    const string& foodName,
    double foodPrice,
    int quantity,
    double subtotal,
    double deliveryFee,
    const string& paymentMethod)
{
    double finalTotal = subtotal + deliveryFee;

    cout << "\n========================================\n";
    cout << "              ORDER SUMMARY\n";
    cout << "========================================\n";

    cout << fixed << setprecision(2);

    cout << left << setw(18) << "Restaurant"
         << ": " << restaurantName << '\n';

    cout << left << setw(18) << "Food"
         << ": " << foodName << '\n';

    cout << left << setw(18) << "Price"
         << ": RM " << foodPrice << '\n';

    cout << left << setw(18) << "Quantity"
         << ": " << quantity << '\n';

    cout << left << setw(18) << "Subtotal"
         << ": RM " << subtotal << '\n';

    cout << left << setw(18) << "Delivery Fee"
         << ": RM " << deliveryFee << '\n';

    cout << left << setw(18) << "Payment"
         << ": " << paymentMethod << '\n';

    cout << "----------------------------------------\n";

    cout << left << setw(18) << "TOTAL"
         << ": RM " << finalTotal << '\n';

    cout << "========================================\n";
    cout << "          ORDER CONFIRMED!\n";
    cout << "========================================\n";
}