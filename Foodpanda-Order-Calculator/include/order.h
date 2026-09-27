#pragma once
#include <string>
#include <vector>
struct Food { std::string name; double price; };
struct Restaurant { std::string name; std::vector<Food> menu; };
struct OrderItem { Food food; int quantity; double subtotal; };
struct Order { std::string restaurant; std::vector<OrderItem> items; double distance=0; double deliveryFee=0; std::string payment; };
std::vector<Restaurant> getRestaurants();
int selectRestaurant(const std::vector<Restaurant>& restaurants);
int selectFood(const Restaurant& restaurant);
int readInt(const std::string& prompt, int min, int max);
double readDouble(const std::string& prompt, double min, double max);
char readYesNo(const std::string& prompt);
void heading(const std::string& title);
OrderItem makeOrderItem(const Food& food, int quantity);
double calculateSubtotal(double price, int quantity);
double calculateDeliveryFee(double distance);
double getDeliveryDistance();
std::string selectPayment();
void printSummary(const Order& order);
double orderSubtotal(const Order& order);
