#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int answer=1234;
    int n = 0;

    while (true){
        cout<< "Please enter 1 integer "<<endl;
        cin>>n;
        int temp1=0,temp2=0;

        bool flag=true;
        
        for (int i=0;i<4;i++){
                temp1 = ((int) (n/pow(10,i)))%10;
                for (int j=i+1;j<4;j++){
                    temp2 = ((int) (n/pow(10,j)))%10;
                    if(temp1 == temp2){
                        flag = false ;
                    }
                }
        }

        if (flag){
            if(n!=answer)
            {
            
                int A=0,B=0;
                for (int i=0;i<4;i++){
                    temp1 = ((int) (answer/pow(10,i)))%10;
                    for (int j=0;j<4;j++){
                        temp2 = ((int) (n/pow(10,j)))%10;
                        if(temp1 == temp2){
                            if (i==j)
                                A++;
                            else
                                B++;
                        }
                    }
                }
                cout<<"The result is : "<<A<<"A"<<B<<"B"<<endl;
            }
            
            else
                break;
        }
        else
            cout<<"Wrong number, please input again"<<endl;
    }
    cout << "Congratulation!!!"<<endl;
	return 0;
}
