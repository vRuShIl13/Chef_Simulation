#pragma once


#include "Event.h"

/*
 * This will hold the type of event in a priority queue called the Event List
 */

class Event;

class EventNode {
private:
    Event eventType;
    EventNode * nextEvent;

public:
    EventNode(Event * );

    Event * getEvent();





};

