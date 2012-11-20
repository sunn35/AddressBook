#include"AddressBook.h"
#include<iostream>

int main(){
	AddressBook *data=new AddressBook("Address_Book.txt");
	data->AddEntry();
	return 1;
}
