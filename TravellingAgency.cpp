#include<iostream>
#include<fstream>

using namespace std;

int client_no=0;

class registration{

	char client_name[50],client_address[100],client_phone[15],reg_date[15],place[50],vehicle[50];
	int client_no,days,seats;
	
public:	
void write_in_file(){
	cout<<"File written";
	fstream f1;
	f1.open("TravellingAgency.txt", ios::out );
	f1<<client_no<<endl;
	f1<<client_name<<endl;
	f1<<client_address<<endl;
	f1<<client_phone<<endl;
	f1<<reg_date<<endl;
	f1<<place<<endl;
	f1<<vehicle<<endl;
	f1<<days<<endl;
	f1<<seats;
	f1.close();
	cout<<"File written";
}

void PersonalData(){	
	cout<<"PLEASE ENTER THE FOLLOWING DETAILS"<<endl;
	cout<<"NAME:  ";
	cin.getline(client_name,50);
	cout<<"ADDRESS:  ";
	cin.getline(client_address,50);
	cout<<"PHONE NUMBER:  ";
	cin.getline(client_phone,50);
	cout<<"REGISTRATION DATE:  ";
	cin.getline(reg_date,50);
	client_no++;
	TravelInfo();
}

void TravelInfo(){
	int cost=0,perkm=100,distance=0;
	cout<<"ENTER PLACE WHERE YOU WANT TO ARRANGE THE TRIP:  ";
	cin.getline(place,50);
	cout<<"ENTER THE NUMBER OF DAYS FOR WHICH YOU WANT TO ARRANGE THE TRIP:  ";
	cin>>days;
	cout<<"ENTER THE NUMBER OF SEATS YOU WANT TO BOOK:  ";
	cin>>seats;
	cin.getline(vehicle,50);
	cout<<"ENTER THE TYPE OF VEHICLE YOU PREFER:  ";
	cin.getline(vehicle,50);
	cout<<"ENTER THE TOTAL DISTANCE(in kms) OF THE TRIP:  ";
	cin>>distance;
	cost=perkm*distance;
	cout<<"COST OF TRAVELLING WILL BE:  "<<cost;
	write_in_file();
}

};

int main(){
	registration client;
	client.PersonalData();
	client.write_in_file();
	
}
