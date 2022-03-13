//
// Created by vrush on 2022-03-13.
//

#include <iostream>

using namespace std;
#include "Arrival.h"
#include "FoodOrder.h"
#include "BasePriceandTime.h"

int Arrival::count=1;

void Arrival::printEvent() {
    cout << "Time: " << time << ", FoodOrder "<< fOder << " arrives -> Expiry: "<< Expiry<< " - Meal: "
    << food << " - Ingredients: "<< ingredients<< " - Prep.time: "<< prep<< " - Price: $"<< price <<endl;
}

Arrival::Arrival(FoodOrder * f) {
    BasePriceandTime * b = new BasePriceandTime;
    time = f->getTime();
    Expiry = f->getExpiry();
    food = f->getName();
    ingredients = f->getIngredients();
    prep = b->getTime(food)+ingredients;
    price = b->getRate(food)+ ingredients;
    fOder = count;
    count++;

}
