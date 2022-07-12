#include<iostream> 

using namespace std; 

int main() 
{ 
int a; 
bool b=false; 
cout << "Please enter an integer N" << endl; 
cin >> a; 
cout<< "The prime factors of N are shown below:" << endl; 
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
cout <<m<<" is the prime factor of"<<a<< " "<<endl; 
b = false; 
		}		
	} 

return 0; 
}
