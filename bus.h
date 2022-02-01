#ifndef _BUS_H_
#define _BUS_H_
#include <iostream>
#include <string>
#include<vector>
#include "transporters.h"
#pragma once

using namespace std;

template <typename ItemType>
class Bus : public Transporters<ItemType>{
    private:
        static const int ITEM_SIZE = 20;
        ItemType items[ITEM_SIZE];
        int count;
        int maxItems;
    public:
        Bus();
        bool load(const ItemType&);
        bool unload(const ItemType&);
        void emptyAllItems();
        bool isEmpty();
        int itemCount();
        void move();
        vector<ItemType> toVector() const;
        ~Bus() {}
};

#include "bus.cpp"

#endif
