

#include "FoodOrder.h"

//makes a new instance of a foodOrder.
FoodOrder::FoodOrder(int t, int e , char * n , int i): time(t), expiry(e), name(n), ingredients(i){}

//GETTERS
int FoodOrder::getTime(){
    return time;
}
int FoodOrder::getExpiry(){
    return expiry;
}
int FoodOrder::getIngredients(){
    return ingredients;
}
char * FoodOrder::getName(){
    return name;
}