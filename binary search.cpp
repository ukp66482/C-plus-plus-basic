#include<iostream>

using namespace std;

int main()
{
    double n,a=0,b,x;//�w�q��//n=�ϥΪ̿�J���ƭ�//a=�U���//b=�W���//x=�G���

    //////////////////Input
    cout<<"�п�JN���ȥH�D�䥭���:";
    cin>>n;
    //////////////////�B��
    b=n;//���J�W���

    for(int i=0;i<100;i++){//�Q�ΰj�����G��
        x=((a+b)/2);//�M��W�U��ɪ�������
        if((x*x)>n){//�p�GX^2�j��N^2�h
            b=x;//�W��ɲ��ʨ줤����
        }else if((x*x)<n){//�p�GX^2�p��N^2�h
            a=x;//�U��ɲ��ʨ줤����
        }
    }
    //////////////////Output
    cout<<endl
        <<">>>>�p�⵲�G<<<<"<<endl
        <<"N������ڬO:"<<x<<endl;
}
