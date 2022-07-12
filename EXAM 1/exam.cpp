#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main() {

string str;
    ifstream ifile;

    //This array is used to deposit the data importing from csv
    int data[100][11];
    //You can change the filename to open the specific data
    

    ifile.open("Problem1_TestData.csv");

    if (ifile)
    {

        int c = 0;
        while (getline (ifile,str)){
            stringstream ss(str);
            string temp;
            // ss ? ?????????
            for(int i=0;i<11;i++){
                getline(ss,temp,',');
                //atoi is used to transform string to int
                data[c][i]=atoi(temp.c_str());
            }
            c++;
        }
        cout << "Finish reading data" << endl;
        //Now, you can start to use the data array to complete this problem
    }
    else
    {
        cout << "Error" <<endl;
    }
	
	for(int i=0;i<100;i++)
	{ 	for(int j=0;j<11;j++)
		cout<<data[i][j]<<" ";
	
	
	cout<<endl;
	}
	
	
	
    ifile.close();

    return 0;
}


