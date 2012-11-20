#include<iostream>
#include<fstream>
#include<cstring>

class AddressBook{
private:
	char filename[50];
public:
	AddressBook();
	AddressBook(const char*);
	void AddEntry();
	void SearchEntry();
	void DeleteEntry();
};	
