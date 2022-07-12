#include <iostream>
#include <iomanip>
using namespace std;

int main()
{int mt[9][9];
  for(int i=1;i<10;i++)
{	 for(int j=1;j<10;j++)
	{
		mt[i-1][j-1]=i*j;
	}
	
}


 
  for(int i=0;i<9;i++)
{
	for(int j=0;i<9;j++)
{
cout<<i+1<<"*"<<j+1<<"="<<setw(2)<<mt[i][j]<<" ";
}
cout<<endl;
}

	return 0;
}


