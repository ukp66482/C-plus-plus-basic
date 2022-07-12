#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()

using namespace std;

 int main()
 {
     srand( (unsigned) time(NULL) );

     for(int i = 0; i<10; i++)
     {
         cout << rand()%100+1 <<endl;
     }
     return 0;
 }

