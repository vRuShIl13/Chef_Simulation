

/*
 * This is a priority queue that will contain events such as arrival, prepare and the complete service event
 */
#pragma once

#include "EventNode.h"
class Event;

class EventList {
private:
    EventNode * first;

public:
    EventList();
    Event * getEvent(int time);


};


