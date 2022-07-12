#include <iostream>
#include <cstdlib>

using namespace std;
int main()

{int m;
int day; 
int days=0;
int amount=0;
cout<<"Please enter the month and day"<<endl;
cin>>m>>day;
int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
for(int i=0;i<m-1;i++)
{days+=arr[i];
}
amount=days+day;
cout<<amount<<endl;
   //system("pause");
   return 0;
}

