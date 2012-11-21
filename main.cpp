#include"AddressBook.h"
#include<iostream>
#include<cstdlib>
using namespace std;
void Menu(){
	AddressBook *data=new AddressBook("Address_Book.txt");
	int choice;
	cout<<string(36,'\n');
	cout<<"1.Add Entry \n2.Search Entry \n3.Delete Entry \n4.Exit \n";
	cout<<"Please enter your choice: ";
	cin>>choice;
	switch (choice)
	{
		case 1:
			data->AddEntry();
			break;
		case 2:
			data->SearchEntry();
			break;
		case 3:
			data->DeleteEntry();
			break;
		case 4:
			exit(1);
		default:
			cout<<"Invalid Choice \nEnter your choice again: ";
	}
}

int main(){
	int ch;
	Menu();
	return 1;
}
