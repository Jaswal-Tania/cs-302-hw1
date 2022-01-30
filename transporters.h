#ifndef TRANSPORTER_H
#define TRANSPORTER_H

#include <iostream>
#include <string>

using namespace std;

class Transporters{
    public:  
        virtual void load() = 0;
        virtual void unload() = 0;
        virtual void emptyAllItems() = 0;
        virtual void isEmpty() = 0;
        virtual void itemCount() = 0;
        virtual void loadPeople() = 0;
        virtual void unloadPeople() = 0;
        virtual void emptyAllPeople() = 0;
        virtual void peopleCount() = 0;
};

#endif
