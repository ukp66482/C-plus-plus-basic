#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main() {

string str;
    ifstream ifile;
	float sum=0;
	float avg=0;
	double SD=0;
  
    int data[100][11];
 
    

    ifile.open("Problem1_TestData.csv");

    if (ifile)
    {

        int c = 0;
        while (getline (ifile,str)){
            stringstream ss(str);
            string temp;
       
            for(int i=0;i<11;i++){
                getline(ss,temp,',');
      
                data[c][i]=atoi(temp.c_str());
            }
            c++;
        }
        cout << "Finish reading data" << endl;

    }
    else
    {
        cout << "Error" <<endl;
    }
	
	for(int i=0;i<100;i++)
	{ 	for(int j=0;j<11;j++)
		{
		sum+=data[i][j];
		avg=sum/11;
		}
		for(int k=0;k<11;k++)
		SD+=pow(data[i][k]-avg,2); 
		SD/=11;
		SD=pow(SD,0.5);	
	
	cout<<"The row "<<i+1<<" SD is : "<<SD<<endl;
	}
	
    ifile.close();

    return 0;
}


