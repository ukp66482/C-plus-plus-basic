#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int main()
{char ch;
ch=getchar();
	if(ch>='0' && ch<='9')
		printf("�A��J�F�Ʀr\n");
	else if(ch>='A' && ch<='Z')
		printf("�A��J�F�j�g�^��\n");
	else if(ch>='a' && ch<='z')
		printf("�A��J�F�p�g�^��\n");
	else
		printf("�A��J�F��L�r��\n"); 


   //system("pause");
   return 0;
}

