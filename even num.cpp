#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{int a,b,s;
cin>>a>>b;
if(a%2==0 && b%2==0) //even even;
{s=(b-a+2)/2;
 cout<<s;
}
if(a%2!=0 && b%2!=0) //odd odd;
{s=(b-a)/2;
 cout<<s;
}
if(a%2!=0 && b%2==0) //odd even
{s=(b-a+1)/2;
 cout<<s;
}
if(a%2==0 && b%2!=0) //even odd
{s=(b-a+1)/2;
cout<<s;
}


   //system("pause");
   return 0;
}

