#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{int table[9][9];
for(int i=0;i<9;i++)
{for(int j=0;j<9;j++)
{table[i][j]=(i+1)*(j+1);
};
};
for(int i=0;i<9;i++)
{for(int j=0;j<9;j++)
{cout<<i+1<<'*'<<j+1<<'='<<setw(3)<<table[i][j]<<" ";
};
cout<<endl;
};


   //system("pause");
   return 0;
}

