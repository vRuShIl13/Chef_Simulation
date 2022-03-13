
#pragma once


class FoodOrder{
private:
    //details about a specific food order
    int time;
    int expiry;
    char * name;
    int ingredients;

public:
    FoodOrder(int, int, char *, int);

    //getters
    int getTime();
    int getExpiry();
    int getIngredients();
    char *getName();

};
