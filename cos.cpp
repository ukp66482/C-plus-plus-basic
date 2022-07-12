#include <iostream>

using namespace std;
void t(float a,float b,float c,float &cosa,float &cosb,float &cosc)
{	
	cosa=(b*b+c*c-a*a)/(2*b*c);	
    cosb=(a*a+c*c-b*b)/(2*a*c);
    cosc=(a*a+b*b-c*c)/(2*a*b);
    
}
int main()
{
	float a,b,c,cosa,cosb,cosc;
	cout<<"Please enter 3 length of triangle"<<endl;
	cin>>a>>b>>c;
	t(a,b,c,cosa,cosb,cosc);
	cout<<cosa<<endl;
	cout<<cosb<<endl;
	cout<<cosc<<endl;
    return 0;
}


