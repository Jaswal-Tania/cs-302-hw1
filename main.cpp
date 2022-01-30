#include <iostream>
#include <string.h>
#include "people.h"
#include "train.h"
#include "bus.h"

using namespace std;

int main(){
	Train<double> cargo(5.3);
	//Cargo cargo("Heavy", 70.4);
	//Cargo cargo2("light", 5.3);



	cout << cargo.load()<< endl;
	
}
