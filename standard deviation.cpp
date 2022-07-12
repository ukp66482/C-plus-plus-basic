#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main()
{double arr[5];
double SD=0;
double average=0;
cout<<"Please enter 5 scores : "<<endl;
for(int i=0;i<5;i++)
{cin>>arr[i];};
for(int i=0;i<5;i++)
{average+=arr[i];};
cout<<"Average:"<<average/5<<endl;

for (int i=0;i<5;i++){
        SD+=pow(arr[i]-average,2);
    }
    SD/=5;
    SD=pow(SD,0.5);
    cout<<"SD:"<<SD<<endl;;




   //system("pause");
   return 0;
}

