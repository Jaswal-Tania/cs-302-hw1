#include "train.h"

template<typename ItemType>
Train<ItemType>::Train(){}

template<typename ItemType>
Train<ItemType>::~Train(){}

template<typename ItemType>
vector<Cargo> Getcargo(){
	return Cargo;
}

template<typename ItemType>
ItemType Train<ItemType>::ItemCount(){
    return this->cargo.size();
 }

template<typename ItemType>
 void Train<ItemType>::load(Cargo cargo){
    this->cargo.push_back(cargo);
 }

template<typename ItemType>
void Train<ItemType>::unload(Cargo cargo){
    bool found = false;

    for (int i = 0; i < this->cargo.size(); i++){
        if (this->cargo.at(i).getType() == cargo.getType()){
             this->cargo.erase(this->cargo.begin() + i);
             found = true;
         }
    }   

        if (found == true){
            cout << "Cargo unloaded!" << endl;
        }

        else{
             cout << "Cargo not found!" << endl;
        }
    }

template<typename ItemType>
ItemType Train<ItemType>::isEmpty(){
    if (this->cargo.size() == 0){
        return true;
    }

    else{
        return false;
    }
}

template<typename ItemType>
void Train<ItemType>::emptyAllItems(){
    this->cargo.clear();
}


