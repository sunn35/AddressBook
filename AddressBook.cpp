#include"AddressBook.h"
#include"Student.h"
#include<cstring>

AddressBook::AddressBook(const char* fname){
	strcpy(filename,fname);
}

AddressBook::AddressBook(){
	strcpy(filename,"Address_Book.txt");
}

void AddressBook::AddEntry(){
	Student *student=new Student();
	student->GetInfo();
	student->write_to_file(filename);
}

void AddressBook::SearchEntry(){}

void AddressBook::DeleteEntry(){}

