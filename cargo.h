#ifndef CARGO_H
#define CARGO_H

#include <iostream>
#include <string>

using namespace std;

class Cargo{
    private:
        string type;
        float weight;

    public:
        Cargo();
        Cargo(string, float);
        Cargo(const Cargo&);
        void setType(string);
        void setWeight(float);
        float getWeight() const;
        string getType() const;
};

#endif
