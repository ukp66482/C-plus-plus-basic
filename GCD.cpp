#include <iostream>

using namespace std;
int gcd(int a,int b)
{
	if(a==b)	
	return b;
	else if (a>b)
	return gcd(a-b,b);
	else if (a<b)
	return gcd(a,b-a);
};
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"Gcd="<<gcd(a,b)<<endl;

    return 0;
}


