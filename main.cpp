#include"AddressBook.h"
#include<iostream>
#include<cstdlib>

using namespace std;

void Print_Menu(void);
void select_choice(void);

void Print_Menu(){

	int choice;
	bool ch;
	cout<<"1.Add Entry \n2.Search Entry \n3.Delete Entry \n4.Exit \n";
	cout<<"Please enter your choice: ";
	select_choice();
}

void select_choice(){
	int choice;
	cin>>choice;
	AddressBook *data=new AddressBook("Address_Book.txt");
	switch (choice)
	{
		case 1:
			data->AddEntry();
			Print_Menu();
			break;
		case 2:
			data->SearchEntry();
			Print_Menu();
			break;
		case 3:
			data->DeleteEntry();
			Print_Menu();
			break;
		case 4:
			exit(1);
		default:
			cout<<"Invalid Choice \nEnter your choice again: ";
			cin.clear();
			cin.ignore();
			select_choice();
	}
}

int main(){
	int ch;
	Print_Menu();
	return 1;
}
