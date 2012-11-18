#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class address_book{
char name[50],address[70],email_id[50],phon_num[20],mobil[20],date[10],month[10],year[10],constr[100];
private:
bool check_char_validity(char *input)
{
	int i,length,check;
	length=strlen(input);
	for (i=0;i<length;i++)
	{
		if(!isalpha(name[i]) && input[i]!=' ')
		{
			return false;
		}
	}
	return true;
}

bool check_int_validity(char *input)
{
	int i,length;
	length=strlen(input);
	for(i=0;i<length;i++)
	{
		if(!isdigit(input[i]))
		{
			return false;
		}
	}
	return true;
}

void invalid_input(){
	cout<<"INVALID INPUT\n Enter again:";
	}
	
bool check_date(char *date,char *month,char *year){
	if (*year>2012 || (*month==2 && *date>28) || *date<1 || *date>31)
		return false;
	else if (*month==4 || *month==6 || *month==9 || *month==11 && *date>30)
		return false;
	else
		return true;
}
	
/*void concatenate(*name,num)
{
	//char arr[50]={'q','w','e','r','t','y','u','i','o','p'};
	int i;

	ofstream write;
	write.open("concatenate.txt");
	for (i=0;i<strlen(name);i++)
		write<<name[i];
	write<<num;
	write.close();
	ifstream read;
	read.open("concatenate.txt");
	read.getline(constr,sizeof(read));
//	cout<<constr;
	read.close();
//	cout<<"\n";
	return 0;
}*/
	
public:
void add_entry(){
	int i,ch;
	cout<<"Please enter the following details"<<endl;
	cout<<"Name: ";
	while(true)
	{
		cin.getline(name,50);
		if (!check_char_validity(name)){
			invalid_input();
		}else
			break;		
	}
	cout<<"Address: ";
	cin.getline(address,70);
	cout<<"Email address: ";
	cin.getline(email_id,50);
	cout<<"Phone Number: ";
	while(true)
	{
		cin.getline(phon_num,20);
		if (!check_int_validity(phon_num)){
			invalid_input();
		}
		else
			break;
	}
	cout<<"Mobile: ";
	while(true)
	{
		cin.getline(mobil,20);
		if (!check_int_validity(mobil)){
			invalid_input();
		}
		else
			break;
	}
	cout<<"DATE OF BIRTH\n";
	//while(true)
	//{
	cout<<"Date: ";
	while(true)
	{
		cin.getline(date,10);
		if (!check_int_validity(date)){
			invalid_input();
		}
		else
			break;
	}
	cout<<"Month: ";
	while(true)
	{
		cin.getline(month,10);
		if (!check_int_validity(month)){
			invalid_input();
		}
		else
			break;
	}
	cout<<"Year: ";
	while(true)
	{
		cin.getline(year,10);
		if (!check_int_validity(year)){
			invalid_input();
		}
		else
			break;
	}
	/*if(!check_date(date,month,year))
		cout<<"Invalid Date try again\n ";
	else
		break;
	}*/
	cout<<name<<"\n"<<address<<"\n"<<email_id<<"\n"<<phon_num<<"\n"<<mobil<<"\n"<<date<<"/"<<month<<"/"<<year<<endl;
	write_to_file();
	}
	void check_filename(){
		ifstream read;
		string filename;
		read.open("filenames.txt");
		getline(read,filename);
		read.close();
	}
	void write_to_file(){
		ofstream write;
		write.open(name);
		write<<name<<endl;
		write<<address<<endl;
		write<<email_id<<endl;
		write<<phon_num<<endl;
		write<<mobil<<endl;
		write<<date<<"/"<<month<<"/"<<year<<endl;
		write.close();
	}
};

int main()
{
	address_book entry;
	entry.add_entry();
	return 0;
}
