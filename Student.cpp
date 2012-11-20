#include"Student.h"

void Student::invalid_input(){
	cout<<"INVALID INPUT\n Enter again:";
}
	
void Student::GetInfo(){
	cout<<"NAME: ";
	while(true)
	{
		cin.getline(name,50);
		if (!check_char_validity(name)){
			invalid_input();
		}else
			break;		
	}
	cout<<"ADDRESS: ";
	cin.getline(address,70);
	cout<<"EMAIL-ID: ";
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
	
}
	
void Student::PrintInfo(){
	cout<<name<<endl;
	cout<<address<<endl;
	cout<<email_id<<endl;
	cout<<phon_num<<endl;
	cout<<mobil<<endl;
	cout<<date<<"/"<<month<<"/"<<year<<endl;
}

bool Student::check_char_validity(char *input)
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

bool Student::check_int_validity(char *input)
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

void Student::write_to_file(const char* filename){
	fstream write;
	write.open(filename,ios::out | ios::app);	
	write<<name<<endl;
	write<<address<<endl;
	write<<email_id<<endl;
	write<<phon_num<<endl;
	write<<mobil<<endl;
	write<<date<<"/"<<month<<"/"<<year<<endl;
	write<<"----------------------------------------------";
	write.close();

}

	
