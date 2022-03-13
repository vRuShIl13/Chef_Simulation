#pragma once

#include "Event.h"
#include "string"


class FoodOrder;

using namespace std;

class Arrival : public Event{
private:
    static int count;
    int time;
    int fOder;
    int Expiry;
    string food;
    int ingredients;
    int prep;
    double price;

public:
    Arrival(FoodOrder *);
    void printEvent() override;
};

