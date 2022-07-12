#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{int a;
int s=2;
cin>>a;
if(a%2==0)
{cout<<"2";
for(int i=0;s<a;i++)
	{
     s=s+2;
	 cout<<" "<<s;
	}
}
if(a%2!=0)
{
	cout<<"2";
	for(int i=0;s<a-2;i++)
	{
	 s=s+2;
	cout<<" "<<s;
	
	
	
	}




}


   //system("pause");
   return 0;
}

