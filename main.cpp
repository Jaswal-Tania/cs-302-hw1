// Tania Jaswal

// Tania Jaswal
// CS302

#include <iostream>
#include <string>
#include "people.h"
#include "train.h"
#include "bus.h"
#include "cargo.h"

using namespace std;

int main(){
    Cargo cargo1("gold", 25.60);
    Cargo cargo2("tin", 25.90);
    Cargo cargo3("lumber", 25.90);

    People people1("Jess", 6.2);
    People people2("Jim", 5.5);
    People people3("Lisa", 4.5);

    Train<int> Count;


    cout << "This program will tell you the status of bus and train." << endl;
    cout << "First let's look the trains!" << endl;
    //cout << tr.move << endl;
    cout << cargo1.getType() << cargo1.getWeight() << endl;
    cout << cargo2.getType() << cargo2.getWeight() << endl;
    cout << cargo3.getType() << cargo3.getWeight() << endl;

    cout << Count.itemCount << endl;
    
}