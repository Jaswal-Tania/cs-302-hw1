#include "bus.h"


template<typename ItemType>
Bus<ItemType>::Bus(){
    count = 0;
	maxItems = ITEM_SIZE;
}

template<typename ItemType>
bool Bus<ItemType>::load(const ItemType& newItem){
    bool space = count < maxItems;

    if(space){
        items[count] = newItem;
        count++;
    }
    
    return space;
}

template<typename ItemType>
bool Bus<ItemType>::unload(const ItemType& remItem){
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
void Bus<ItemType>::emptyAllItems(){
    return count = 0;
}

template<typename ItemType>
bool Bus<ItemType>::isEmpty(){
    return count == 0; 
}


template<typename ItemType>
int Bus<ItemType>::itemCount(){
    return count;
}

template<typename ItemType>
void Bus<ItemType>::move(){
	std::cout << "The Bus is moving!!" <<std::endl;
}

template<typename ItemType>
vector<ItemType> Bus<ItemType>::toVector() const{
	vector<ItemType> bItems;

	for( int index = 0; index < count; index++){
		bItems.push_back(items[ITEM_SIZE]);
	}

	return bItems;
}