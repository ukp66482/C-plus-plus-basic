#include<iostream>

using namespace std;

int main()
{
    double n,a=0,b,x,e;//�w�q��//n=�ϥΪ̿�J���ƭ�//a=�U���//b=�W���//x=�G���

    
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
