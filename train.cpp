#include "train.h"

template<typename ItemType>
Train<ItemType>::Train(){
	count = 0;
	maxItems = ITEM_SIZE;
}

template<typename ItemType>
bool Train<ItemType>::load(const ItemType& newItem){
	bool space = count < maxItems;
	
    if(space){
        items[count] = newItem;
        count++;
    }

	// int i = newItem;

	// while(i < items[count]){

	// }

    return space;
}

template<typename ItemType>
bool Train<ItemType>::unload(const ItemType& remItem){
	bool found = false;
    int index = 0;

    while(!found && (index < count)){
        if(items[index] == remItem){
            found = true;
        }
        else{
            index++;
        } 
    }

    if (found){ //swap with last item
        items[index] = items[count-1];
        count--;
    }

    return found;
}

template<typename ItemType>
void Train<ItemType>::emptyAllItems(){
	count = 0;
}

template<typename ItemType>
bool Train<ItemType>::isEmpty() const{
	return count == 0;
}


template<typename ItemType>
int Train<ItemType>::itemCount(){
	return count;
}

template<typename ItemType>
void Train<ItemType>::move(){
	std::cout << "The Train is moving!!" <<std::endl;
}

template<typename ItemType>
vector<ItemType> Train<ItemType>::toVector() const{
	vector<ItemType> tItems;

	for( int index = 0; index < count; index++){
		tItems.push_back(items[ITEM_SIZE]);
	}

	return tItems;
}