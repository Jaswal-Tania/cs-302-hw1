#ifndef _TRANSPORTER_H_
#define _TRANSPORTER_H_

#include <vector>
using namespace std;

template <typename ItemType>
class Transporters{
    private:
    public:  
        virtual bool load(const ItemType&) = 0;
        virtual bool unload(const ItemType&) = 0;
        virtual void emptyAllItems() = 0;
        virtual bool isEmpty() = 0;
        virtual int itemCount() = 0;
        virtual void move() = 0;
        virtual vector<ItemType> toVector() const = 0;
};

#endif