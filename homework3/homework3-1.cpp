#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{cout<<"Please enter M and N"<<endl;
int M,N,r;
cin>>M>>N;
srand((unsigned) time(NULL) );
for(int i=1;i<=M;i++)
{
do{r=rand()%(N+1);
}while(r%2==0) ;
 
cout<<i<<"th:"<<r<<endl;
}


return 0;
}


