#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main()
{
double sum,std,avg,sum1;
int num;
sum1=0;
cin>>num;
double arr[num];
	for(int i=0;i<num;i++)
		cin>>arr[i];
	for(int i=0;i<num;i++)
		{sum=sum+arr[i];}
avg=sum/num;
	for(int i=0;i<num;i++)
	{sum1=sum1+pow((arr[i]-avg),2);}
sum1=sum1/num;
std=pow(sum1,0.5);
cout<<"avg is "<<avg<<endl;
cout<<"std is "<<std;
   //system("pause");
   return 0;
}

