#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int A[] = {3, 5, 1, 8, 4};
int i, j, tmp;
int n = sizeof(A)/sizeof(int);
for(i = n-1; i > 0; i--)
{
    for(j = 0; j <= i-1; j++)
    {
        if( A[j] > A[j+1])
        {
            tmp = A [j];
            A[j] = A[j+1];
            A[j+1] = tmp;
        }
    }
};
for(int i=0;i<n;i++)
{
cout<<A[i]<<" ";}

   //system("pause");
   return 0;
}

