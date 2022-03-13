//
// Created by vrush on 2022-03-12.
//

#include "EventList.h"

EventList::EventList(): first(nullptr) {

}

Event *EventList::getEvent(int time) {
    EventNode * curr = first;
    Event * type;    // is this ok?
    while (curr != nullptr) {
        type = curr->getEvent();
        if(type.)

    }


    return nullptr;
}
