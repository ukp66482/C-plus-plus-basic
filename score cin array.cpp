#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{int score[2][3];
	for(int i=0;i<2;i++)
{	for(int j=0;j<3;j++)
{	cin>>score[i][j];
};
};
	for(int i=0;i<2;i++)
{	for(int j=0;j<3;j++)
{cout<<"class "<<i+1<<" NUM "<<j+1<<':'<<score[i][j]<<endl;
};




};
   //system("pause");
   return 0;
}

