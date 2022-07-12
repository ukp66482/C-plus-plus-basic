#include <iostream>
#include <cstdlib>
using namespace std;
int sum(int x,int y)
{
int s=x+y;
return s;
}
int main()
{
int a,b,s;
cin>>a>>b;
s=sum(a,b);
cout<<s<<endl;
   return 0;
}

