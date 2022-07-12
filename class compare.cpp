#include <iostream>
#include <iomanip>

#define CLASS 2
#define STUDENT 3

using namespace std;

int main()
{
 int temp1=0;
 int temp2=0;
	int score[CLASS][STUDENT];
	for (int j=0; j < CLASS; j++ )
	{
		cout<<"==班級"<<j+1<<endl;
		for (int i=0; i < STUDENT; i++ )
		{
		    cout<<"學生"<<i+1<<endl;
			cin>>score[j][i];
		}
	}
	for (int j=0; j < CLASS; j++ )
	{
		cout<<"==班級"<<j+1<<endl;
		for (int i=0; i < STUDENT; i++ )
		{
		    cout<<"學生"<<i+1;
			cout<<setw(3)<<score[j][i]<<endl;;
		}
	}
	
	temp1=(score[0][0]+score[0][1]+score[0][2])/3;
	temp2=(score[1][0]+score[1][1]+score[1][2])/3;
	cout<<"The class 1 average is "<<temp1<<endl;
	cout<<"The class 2 average is "<<temp2<<endl;
	if(temp1>temp2)
	{cout<<"Class 1 is better";
	}
	else if(temp1<temp2){cout<<"Class 2 is better";
						}
	else{cout<<"NO one is better";}	
	return 0;
}

