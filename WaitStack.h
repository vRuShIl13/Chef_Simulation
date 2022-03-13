#pragma once

#include "WaitType.h"

class FoodOrder;
class Node;

class WaitStack : public WaitType {
private :
   Node * fOder;
public:
    WaitStack();
    void insert(Node * f);
    FoodOrder * remove() override;
    FoodOrder * getOrder() override;
    bool isEmpty() override;


};


