#ifndef BUS_H
#define BUS_H

#include <iostream>
#include <string>
#include "transporters.h"
using namespace std;

template <typename ItemType>
class Bus : public Transporters{
    public:
        Bus();
        virtual ~Bus();
        vector<People> Getpeople();
        void Setpeople(vector<People> val);
        void loadPeople(People people);
        void unloadPeople(People people);
        void emptyAllPeople();
        ItemType peopleCount();
        void sortPeople();
        ItemType isEmpty();

    private:
        vector<People> people;
};

#include "bus.cpp"
#endif
