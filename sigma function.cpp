#include <iostream>
#include <cstdlib>
using namespace std;
int sigma(int N)
{int ans=0;
for(int i=1;i<=N;i++)
{ans+=i;
};
return(ans);
};
int main()
{int N;
cin>>N;
sigma(N);
cout<<sigma(N)<<endl;


   //system("pause");
   return 0;
}

