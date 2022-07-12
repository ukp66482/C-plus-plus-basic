#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int len;
double avg;
cout<<"Please enter the length of array"<<endl;
		cin>>len;
int *p;
p=(int*)malloc(sizeof(int)*len);
cout<<"Please enter the elements of array"<<endl;
	for(int i=0;i<len;i++)
		cin>>*(p+i);
		for(int j=0;j<len;j++)
		avg+=*(p+j);
cout<<"The average of array is "<<avg/len<<endl;

   //system("pause");
   return 0;
}

