#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
#include <string>
#include <vector>
#include "transporters.h"

using namespace std;

template <typename ItemType>
class Train : public Transporters<ItemType>{
    private:
        static const int ITEM_SIZE = 20;
        ItemType items[ITEM_SIZE];
        int count;

    public:
        Train();
        void load(const ItemType&);
        void unload(const ItemType&);
        void emptyAllItems();
        bool isEmpty() const;
        int itemCount();
};
#include "train.cpp"
#endif
