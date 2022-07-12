#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int a=0;
bool b=false;
do{	
	cout<<"Please enter an integer N (or 0 to leave):"<<endl;
	cin>>a;
		if(a<0)
		{cout<<"This is a wrong value please re-enter the value"<<endl;}
		else if(a>0)
						{cout<< "The prime factors of N are shown below:" << endl; 
			for(int m=2;m<=a;m++) 
	{ 
			if(a % m == 0) 
		{	 
				for(int n=2;n<m;n++) 
			{ 
					if(m%n==0) 
						{ 
						b = true; 
						} 
			} 
					if(b==false) 
	cout <<m<<" is the prime factor of "<<a<<" "<<endl; 
		b = false; 
		}		
	} 
						}
		cout<<"------------------------------"<<endl;					
}while(a!=0);



   //system("pause");
   return 0;
}

