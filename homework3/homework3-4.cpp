#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{
	ifstream file;
	ofstream sfile;
	sfile.open("homework3-4"); 
	file.open("HW3_5_Encoded.txt");
	string str;
	int a;
	while(!file.eof())
	{
		file>>a;
		char b=a;
	cout<<b;
	sfile<<b;
	};
	sfile.close();

system("pause"); 
} 

