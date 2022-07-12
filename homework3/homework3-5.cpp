#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;
void print(int x){
string suit[]={"¶Â®ç","±öªá","¬õ¤ß","¤è¶ô"};
char rank[]={'A','2','3','4','5','6','7','8','9','10','J','Q','K'};
cout<<suit[x/13]<<rank[x%13];
}

int main(){
int i,j;
int a[52];
int player[4][13];
for(i=0;i<52;i++)
a[i]=i;
srand(time(0));
random_shuffle(a,a+52);
for(i=0;i<52;i++)
player[i/13][i%13]=a[i];
for(i=0;i<4;i++)
sort(player[i],player[i]+13);
for(i=0;i<4;i++){
cout<<"Player "<<i+1<<": ";
for(j=0;j<13;j++){
print(player[i][j]);
cout<<" ";
}
cout<<endl;
}

return 0;
}
