#include "bus.h"


template<typename ItemType>
Bus<ItemType>::Bus() {}

template<typename ItemType>
Bus<ItemType>::~Bus() {}

template<typename ItemType>
vector<People> Getpeople() { 
    return People;
}

template<typename ItemType>
void Bus<ItemType>::Setpeople(vector<People> val) { people = val; }

template<typename ItemType>
void Bus<ItemType>::loadPeople(People people){
    this->people.push_back(people);
    this->sortPeople();
}

template<typename ItemType>
void Bus<ItemType>::unloadPeople(People people){
    bool found = false;

    for (int i = 0; i < this->people.size(); i++){
        if (this->people.at(i).getName() == people.getName()){
        this->people.erase(this->people.begin() + i);
        }
    }

    if (found == true){
        cout << "Person has got off the bus!" << endl;
        this->sortPeople();
    }

    else{
        cout << "Person is not on the bus!" << endl;
    }
}

template<typename ItemType>
void Bus<ItemType>::emptyAllPeople(){
    this->people.clear();
}

template<typename ItemType>
ItemType Bus<ItemType>::peopleCount(){
    return this->people.size();
}

template<typename ItemType>
void Bus<ItemType>::sortPeople(){
    People temp;

    for (int i = 0; i < this->people.size(); i++){
        for (int j = 0; j < this->people.size() - i - 1; j++){
            if (this->people.at(j).getHeight() < this->people.at(j + 1).getHeight()){
                temp = this->people.at(j);
                this->people.at(j) = this->people.at(j + 1);
                this->people.at(j + 1) = temp;
            }
        }
    }
}

template<typename ItemType>
ItemType Bus<ItemType>::isEmpty(){
    if (this->people.size() == 0){
        return true;
    }

    else{
        return false;
    }
}
