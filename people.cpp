#include "people.h"

        People::People(){
            name = "";
            height = 0;
        }

        People::People(string newName, float newHeight){
            setName(newName);
            setHeight(newHeight);
        }

        People::People(const People& rhs){
            height = rhs.height;
	        name = rhs.name;
        }

        string People::getName() const{
            return name;
        }
        float People::getHeight() const{
            return height;
        }

        void People::setHeight(float newHeight){
            height = newHeight;
        }
        void People::setName(string newName){
             name = newName;
        }

       
