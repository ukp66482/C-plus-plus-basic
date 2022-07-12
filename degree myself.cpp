#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ 

cout<<"Please enter score"<<endl;
int a;
cin>>a;

if(a>100 || a<0)
{cout<<"The score is unavailable!"<<endl;}
else{if (a>=90 && a<=100)
{cout<<"Your score is : A";}
else if(a>=80 && a<=89)
{cout<<"Your score is : B";}
else if(a>=70 && a<=79)
{cout<<"Your score is : C";}
else if(a>=60 && a<=69)
{cout<<"Your score is : D";} 
else if(a>=0 && a<=59)
{cout<<"Your score is : E";}













}


	

   //system("pause");
   return 0;
}

