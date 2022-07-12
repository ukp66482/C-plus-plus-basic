#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int m,n,days;
int array[12]{31,28,31,30,31,30,31,31,30,31,30,31};	
cout<<"Please enter the month and day"<<endl;
cin>>m>>n;
	for(int i=0;i<m-1;i++)
{days+=array[i];
};
days+=n;
cout<<"The order of "<<m<<'/'<<n<<" is "<<days<<endl;



   //system("pause");
   return 0;
}

