CC = g++

AddressBook : ./Student.o ./main.o ./AddressBook.o
	$(CC) -g -o ./AddressBook ./Student.o ./main.o ./AddressBook.o
#	rm -f *~

./Student.o : ./Student.cpp
	$(CC) -g -c -o ./Student.o ./Student.cpp
	
./main.o : ./main.cpp
	$(CC) -g -c -o ./main.o ./main.cpp
	
./AddressBook.o : ./AddressBook.cpp
	$(CC) -g -c -o ./AddressBook.o ./AddressBook.cpp
