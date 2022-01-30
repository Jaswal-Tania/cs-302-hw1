#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
#include <string>
#include <vector>
#include "transporters.h"
#include "cargo.h"
using namespace std;

template <typename ItemType>
class Train : public Transporters{
    private:
        vector<Cargo> cargo;
    public:
        Train();
        virtual ~Train();
        vector<Cargo> Getcargo();
        ItemType ItemCount();
        void load(Cargo cargo);
        void unload(Cargo cargo);
        ItemType isEmpty();
        void emptyAllItems();
};
#include "train.cpp"
#endif
