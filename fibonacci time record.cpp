#include <iostream>
#include <cstdlib>
#include <ctime>   
using namespace std;

 int Fibonacci (int n)
 {
    if (n<=2)
        return 1;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
 }

 int main()
 {
 	int N=0;
 	cin>>N;
 	clock_t start, finish; 
 	start = clock();
     for (int i=1;i<N;i++)
        cout <<Fibonacci(i)<<" ";
      finish=clock();
     cout <<endl<<(finish-start)/(double)(CLOCKS_PER_SEC)<<endl;
    
 }

