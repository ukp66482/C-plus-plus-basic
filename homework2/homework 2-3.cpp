#include <iostream>
#include <stdlib.h>
#include <algorithm> 
using namespace std;



void yourFunction(float *p,int N,float &m,float &n)
{
 float temp;
 for(int x=1 ; x<N ;x++)
 {
  for(int i=0 ; i<N ; i++)
  {
   if(*(p+i)<*(p+i+1) )
   {
    {temp=*(p+i);
   *(p+i)=*(p+i+1);
   *(p+i+1)=temp;};
   }
  }
 }
 n=*(p+N-1);
 m=*(p);
}            
int main()
{
 int N;
    float m,n;
    cout << "Please enter the length of array" << endl;
    cin >> N;
    float *p = (float *) malloc(sizeof(float)*N);

    for(int i=0;i<N;i++)
        cin >> *(p+i);

    yourFunction(p,N,m,n);

    cout << "The maximum of your array is " << m << endl;
    cout << "The minimum of your array is " << n << endl;

    return 0;
}
