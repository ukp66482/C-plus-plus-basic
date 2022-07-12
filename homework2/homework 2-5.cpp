#include<iostream>

using namespace std;

int main()
{
    double n,a=0,b,x,e;//定義區//n=使用者輸入的數值//a=下邊界//b=上邊界//x=逼近值

    
    cout<<"Please enter a number (>1) and error :";
    cin>>n;
    cin>>e;
    b=n;
    
    do{x=((a+b)/2);
    if((x*x)>n)
	{ b=x;}
	else if((x*x)<n)
	{a=x;};
	}
	while(b-a>e);

    
    cout<<"The square root is : "<<x<<endl;
}
