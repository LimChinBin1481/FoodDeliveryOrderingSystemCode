#include "validation.h"
#include <iostream>
#include <limits>

using namespace std;

bool askOrderAgain()
{
    char choice;

    while (true)
    {
        cout << "\nWould you like to place another order? (Y/N): ";
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 'Y' || choice == 'y')
        {
            return true;
        }

        if (choice == 'N' || choice == 'n')
        {
            return false;
        }

        cout << "Invalid choice. Please enter Y or N.\n";
    }
}