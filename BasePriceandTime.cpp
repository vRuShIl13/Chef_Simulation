//
// Created by vrush on 2022-03-13.
//

#include <cstring>
#include "BasePriceandTime.h"



BasePriceandTime::BasePriceandTime() {

    baseRate[0] = 6.99;
    baseRate[1] = 8.99;
    baseRate[2] = 12.99;
    baseRate[3] = 14.99;
    meals[0] = "Salad";
    meals[1] = "Burger";
    meals[2] = "Pizza";
    meals[3] = "Stew";
    basePrep[0] = 3;
    basePrep[1] = 4;
    basePrep[2]  = 6;
    basePrep[3]  = 7;

}


int BasePriceandTime::getTime(string name) {
    for(int i = 0; i<meals->length();i++){
        if(name==meals[i]) {
            return basePrep[i];
        }
    }

    return 0;
}

double BasePriceandTime::getRate(string name) {
    for(int i = 0; i<meals->length();i++){
        if(name==meals[i]) {
            return baseRate[i];
        }
    }

    return 0;
}

