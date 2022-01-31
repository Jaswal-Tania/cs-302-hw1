#include "train.h"

template<typename ItemType>
Train<ItemType>::Train() : Count(0){
}

template<typename ItemType>
void Train<ItemType>::load(const ItemType& newItem){
	items[Count] = newItem;
	return newItem++;
}

template<typename ItemType>
void Train<ItemType>::unload(const ItemType& remItem){
	items[Count] = remItem;
	return remItem--;
}

template<typename ItemType>
void Train<ItemType>::emptyAllItems(){
	return count = 0;
}

template<typename ItemType>
bool Train<ItemType>::isEmpty() const{
	return Count == 0;
}


template<typename ItemType>
int Train<ItemType>::itemCount(){
	return Count;
}





// template<typename ItemType>
// Train<ItemType>::~Train(){}

// template<typename ItemType>
// vector<Cargo> getCargo(){
// 	return Cargo;
// }

// template<typename ItemType>
// ItemType Train<ItemType>::ItemCount(){
//     return this->cargo.size();
//  }

// template<typename ItemType>
//  void Train<ItemType>::load(Cargo cargo){
//     this->cargo.push_back(cargo);
//  }

// template<typename ItemType>
// void Train<ItemType>::unload(Cargo cargo){
//     bool found = false;

//     for (int i = 0; i < this->cargo.size(); i++){
//         if (this->cargo.at(i).getType() == cargo.getType()){
//              this->cargo.erase(this->cargo.begin() + i);
//              found = true;
//          }
//     }   

//         if (found == true){
//             cout << "Cargo unloaded!" << endl;
//         }

//         else{
//              cout << "Cargo not found!" << endl;
//         }
//     }

// template<typename ItemType>
// bool Train<ItemType>::isEmpty(){
//     if (this->cargo.size() == 0){
//         return true;
//     }

//     else{
//         return false;
//     }
// }

// template<typename ItemType>
// void Train<ItemType>::emptyAllItems(){
//     this->cargo.clear();
// }
