#include <iostream>
#include <stdlib.h>
using namespace std;

double avg(int *data,int len)
{
double avg=0;
	for(int i = 0; i < len; ++i)
		avg=avg+*(data+i);
		avg=avg/len;
return avg;
}

int main()
{
int *p;
int n;
double ans;
	cout<<"Please enter the number of array:"<<endl;
	cin>>n;
	cout<<"Please enter the elements of array:"<<endl;
p=(int*)malloc(sizeof(int)*n);
		for(int i=0;i<n;i++)
	{
		cin>>*(p+i);
		ans=avg(p,n);
		cout<<"Average of your array is:"<<ans<<endl;
	}	

return 0;
}


