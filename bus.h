#ifndef BUS_H
#define BUS_H

#include <iostream>
#include <string>
#include<vector>
#include "transporters.h"
using namespace std;

template <typename ItemType>
class Bus : public Transporters<ItemType>{
    private:
        static const int ITEM_SIZE = 20;
        ItemType items[ITEM_SIZE];
        int count;
    public:
        Bus();
        void load(const ItemType&);
        void unload(const ItemType&);
        void emptyAllItems();
        bool isEmpty();
        int itemCount();
};

#include "bus.cpp"
#endif
