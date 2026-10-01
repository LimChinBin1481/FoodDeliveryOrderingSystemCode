#include "delivery.h"
#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream>
#include <string>

using namespace std;

double getDistance()
{
    double distance;
    string input;

    while (true)
    {
        cout << "\nEnter delivery distance (KM): ";
        getline(cin, input);

        stringstream ss(input);

        // Valid only if:
        // 1. A number can be read
        // 2. Nothing extra remains
        // 3. Distance is greater than 0
        if (ss >> distance && ss.eof() && distance > 0)
        {
            return distance;
        }

        cout << "Invalid distance. Please enter a valid number greater than 0.\n";
    }
}
double calculateDeliveryFee(double distance)
{
    if (distance <= 3)
        return 3.00;
    else if (distance <= 6)
        return 5.00;
    else if (distance <= 10)
        return 8.00;
    else
        return 12.00;
}

void displayDelivery(double distance, double deliveryFee)
{
    cout << "\n========================================\n";
    cout << "             DELIVERY DETAILS\n";
    cout << "========================================\n";
    cout << fixed << setprecision(2);
    cout << "Distance     : " << distance << " KM\n";
    cout << "Delivery Fee : RM " << deliveryFee << '\n';
    cout << "========================================\n";
}