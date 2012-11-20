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

void AddressBook::SearchEntry(){
	int i;
	ifstream read;
	char data[50];
	char name[50];
	bool dataFound=false;
	cout<<"Enter name to be searched: ";
	cin>>name;
	read.open(filename);
	while(!read.eof())
	{
		read.getline(data,50);
		if(strcmp(name,data)==0)
		{
			cout<<"DATA FOUND\n";
			dataFound=true;
			cout<<"NAME: "<<data<<endl;
	 		read.getline(data,50);
			cout<<"ADDRESS: "<<data<<endl;
			read.getline(data,50);
			cout<<"EMAIL-ID: "<<data<<endl;
			read.getline(data,50);
			cout<<"PHONE NUMBER: "<<data<<endl;
			read.getline(data,50);
			cout<<"MOBILE: "<<data<<endl;
			read.getline(data,50);
			cout<<"DATE OF BIRTH\n"<<data<<endl;
			cout<<"\n";
		}else
			for (i=0 ; i<5 ; i++)
				read.getline(data,50);
				
	}
	if (!dataFound)
		cout<<"DATA NOT FOUND\n";
		
	read.close();
}

void AddressBook::DeleteEntry(){
	int i;
	fstream read;
	char data[50];
	char name[50];
	bool dataFound=false;
	cout<<"Enter name to be searched: ";
	cin>>name;
	read.open(filename, ios::in | ios::out);
	while(!read.eof())
	{
		read.getline(data,50);
		if(strcmp(name,data)==0)
		{
//			cout<<"DATA FOUND\n";
//			dataFound=true;
//			cout<<"NAME: "<<data<<endl;
			read.put('#');
			read.getline(data,50);
//			cout<<"ADDRESS: "<<data<<endl;
			read.put('#');
			read.getline(data,50);
//			cout<<"EMAIL-ID: "<<data<<endl;
			read.put('#');
			read.getline(data,50);
//			cout<<"PHONE NUMBER: "<<data<<endl;
			read.put('#');
			read.getline(data,50);
//			cout<<"MOBILE: "<<data<<endl;
			read.put('#');
			read.getline(data,50);
//			cout<<"DATE OF BIRTH\n"<<data<<endl;
			cout<<"DELETED\n";
		}else
			for (i=0 ; i<5 ; i++)
				read.getline(data,50);
				
	}
	if (!dataFound)
		cout<<"DATA NOT FOUND\n";
		
	read.close();
}

