#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int n=0;
    cout<< "Please enter 1 integer "<<endl;
    cin>>n;
    int temp1=0,temp2=0;

    
    bool flag=true;

    for (int i=0;i<4;i++){
            temp1 = ((int)(n/pow(10,i)))%10; 
            for (int j=i+1;j<4;j++){
                	temp2 = ((int) (n/pow(10,j)))%10; 
                		if(temp1==temp2){
                   	flag=false ;
                }
            }
    }

    if (flag)
        cout<<"Right"<<endl;
    else
        cout<<"Wrong"<<endl;

	return 0;
}


