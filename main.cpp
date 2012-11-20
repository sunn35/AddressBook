#include"AddressBook.h"
#include<iostream>

int main(){
	AddressBook *data=new AddressBook("Address_Book.txt");
//	data->AddEntry();
//	data->SearchEntry();
	data->DeleteEntry();
	
	return 1;
}
