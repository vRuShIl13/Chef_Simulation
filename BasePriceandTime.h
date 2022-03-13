#pragma once

#include "string"
using namespace std;

class BasePriceandTime {
    
private:
    double baseRate[4];
    int basePrep[4];
    string meals[4];

public:
    BasePriceandTime();
    int getTime (string name);
    double getRate(string name);
};


