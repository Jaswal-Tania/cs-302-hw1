project1: main.o people.o train.o cargo.o
	g++ -o project1 main.o people.o
main.o: main.cpp transporters.h people.h train.h cargo.h
	g++ -c main.cpp
bus.o: bus.cpp 
	g++ -c bus.cpp
people.o: people.cpp
	g++ -c  people.cpp
train.o: train.cpp
	g++ -c train.cpp
cargo.o: cargo.cpp
	g++ -c cargo.cpp
clean: 
	rm*.o project1
