#include "order.h"
#include <cassert>
#include <cmath>
#include <iostream>
#include <stdexcept>
bool eq(double a,double b){return std::abs(a-b)<1e-9;}
int main(){
    assert(eq(calculateSubtotal(15,2),30));
    assert(eq(calculateSubtotal(0,1),0));
    assert(eq(calculateDeliveryFee(0),3));
    assert(eq(calculateDeliveryFee(5),3));
    assert(eq(calculateDeliveryFee(5.01),5));
    assert(eq(calculateDeliveryFee(10),5));
    assert(eq(calculateDeliveryFee(10.01),8));
    bool threw=false;try{calculateSubtotal(10,0);}catch(const std::invalid_argument&){threw=true;}assert(threw);
    threw=false;try{calculateDeliveryFee(-1);}catch(const std::invalid_argument&){threw=true;}assert(threw);
    Order order;order.items.push_back(makeOrderItem({"Burger",15},2));order.items.push_back(makeOrderItem({"Rice",12},1));
    assert(eq(orderSubtotal(order),42));
    std::cout << "All calculation tests passed.\n";
}
