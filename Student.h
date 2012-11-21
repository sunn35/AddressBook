#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class Student{
private:
	char name[50],address[70],email_id[50],phon_num[20],mobil[20],date[10],month[10],year[10];
	void invalid_input();	
	bool check_char_validity(char* );
	bool check_int_validity(char* );
public:
	void write_to_file(const char* );
	void GetInfo();
	void PrintInfo();
};
