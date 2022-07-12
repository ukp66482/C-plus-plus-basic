#include <iostream>

using namespace std;
int add(int n)
{
	int sn=0;
	for(int i=0;i<n;i++)
	{sn+=i+1;};
return sn;

};
int main()
{
int n,ans=0;
cin>>n;
cout<<add(n)<<endl;
    return 0;
}


