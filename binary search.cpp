#include<iostream>

using namespace std;

int main()
{
    double n,a=0,b,x;//定義區//n=使用者輸入的數值//a=下邊界//b=上邊界//x=逼近值

    //////////////////Input
    cout<<"請輸入N的值以求其平方根:";
    cin>>n;
    //////////////////運算
    b=n;//載入上邊界

    for(int i=0;i<100;i++){//利用迴圈執行逼近
        x=((a+b)/2);//尋找上下邊界的中間值
        if((x*x)>n){//如果X^2大於N^2則
            b=x;//上邊界移動到中間值
        }else if((x*x)<n){//如果X^2小於N^2則
            a=x;//下邊界移動到中間值
        }
    }
    //////////////////Output
    cout<<endl
        <<">>>>計算結果<<<<"<<endl
        <<"N的平方根是:"<<x<<endl;
}
