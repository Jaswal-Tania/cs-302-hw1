#ifndef PEOPLE_H
#define PEOPLE_H

#include <iostream>
#include <string>

using namespace std;

class People{
    private:
        string name;
        float height;

    public:
        People();
        People(string, float);
        People(const People&);
        void setName(string);
        void setHeight(float);
        string getName() const;
        float getHeight() const;
};

#endif
