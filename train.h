#ifndef _TRAIN_H_
#define _TRAIN_H_
#pragma once

#include <vector>
#include "transporters.h"

using namespace std;

template <typename ItemType>
class Train : public Transporters<ItemType>{
    private:
        static const int ITEM_SIZE = 20;
        ItemType items[ITEM_SIZE];
        int count;
        int maxItems;

    public:
        Train();
        bool load(const ItemType&);
        bool unload(const ItemType&);
        void emptyAllItems();
        bool isEmpty() const;
        int itemCount();
        void move();
        vector<ItemType> toVector() const;
        ~Train(){}
};
#include "train.cpp"
#endif