#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int main()
{char ch;
ch=getchar();
	if(ch>='0' && ch<='9')
		printf("你輸入了數字\n");
	else if(ch>='A' && ch<='Z')
		printf("你輸入了大寫英文\n");
	else if(ch>='a' && ch<='z')
		printf("你輸入了小寫英文\n");
	else
		printf("你輸入了其他字元\n"); 


   //system("pause");
   return 0;
}

