#include <iostream>
#include <cstdlib>
#include <stdio.h> 
using namespace std;
int main()
{char ch;
ch=getchar();
if(ch>='a' && ch<='z')
{ch-=32;
}
cout<<ch<<endl;

   //system("pause");
   return 0;
}

