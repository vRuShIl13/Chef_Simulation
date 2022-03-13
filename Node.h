#pragma once

class FoodOrder;

class Node {
private:
    FoodOrder * fOrder;
    Node *next;

public:
    Node(FoodOrder *fO,Node *n);
    ~Node();


};
