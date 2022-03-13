/*
 * This class is the super class of WaitStack , WaitQueue , WaitPQ
 * FoodOrders will be served by the 3 types of simulation based on the uer input.
 */
#pragma once

//FR
class FoodOrder;

class WaitType {

public:
    WaitType();
    virtual bool isEmpty() = 0;
    virtual void insert() = 0;
    virtual FoodOrder * remove() =0;
    virtual FoodOrder * getOrder()=0;

};


