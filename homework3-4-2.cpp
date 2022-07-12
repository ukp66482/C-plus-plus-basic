#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{
	ifstream file;
	
	
	file.open("HW3_5_Encoded.txt");
	string str;
	int a;
	while(!file.eof())
	{
		file>>a;
		char b=a;
	cout<<b;
	};

system("pause"); 
} 

