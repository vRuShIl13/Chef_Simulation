

//this holds the food order

#include "Node.h"

Node::Node(FoodOrder *fO, Node *n): fOrder(fO), next(n) {

}

Node::~Node() {
    delete next;
}
