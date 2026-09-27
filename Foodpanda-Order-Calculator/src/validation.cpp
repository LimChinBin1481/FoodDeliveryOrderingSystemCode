#include "order.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
void heading(const std::string& title) {
    std::cout << "\n========================================\n" << title
              << "\n========================================\n";
}
int readInt(const std::string& prompt, int min, int max) {
    while (true) {
        std::cout << prompt;
        std::string line; if (!std::getline(std::cin,line)) { std::cout << "\nInput closed.\n"; std::exit(0); }
        std::istringstream in(line); int value; char extra;
        if ((in >> value) && !(in >> extra) && value >= min && value <= max) return value;
        std::cout << "Please enter a whole number from " << min << " to " << max << ".\n";
    }
}
double readDouble(const std::string& prompt, double min, double max) {
    while (true) {
        std::cout << prompt;
        std::string line; if (!std::getline(std::cin,line)) { std::cout << "\nInput closed.\n"; std::exit(0); }
        std::istringstream in(line); double value; char extra;
        if ((in >> value) && !(in >> extra) && std::isfinite(value) && value >= min && value <= max) return value;
        std::cout << "Please enter a number from " << min << " to " << max << ".\n";
    }
}
char readYesNo(const std::string& prompt) {
    while (true) {
        std::cout << prompt;
        std::string line; if (!std::getline(std::cin,line)) { std::cout << "\nInput closed.\n"; std::exit(0); }
        if (line == "Y" || line == "y") return 'Y';
        if (line == "N" || line == "n") return 'N';
        std::cout << "Please enter Y or N.\n";
    }
}
