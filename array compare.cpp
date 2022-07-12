#include <iostream>

using namespace std;

int main()
{
    double arr[5];
    double *p = arr;

    cout<<"Please enter 5 number : ";
    for (int i=0;i<5;i++){
            cin>>*(p+i);
    }

    double temp;
    for (int i=0;i<5;i++){
        for (int j=0;j<4-i;j++){
            if (*(p+j)>*(p+j+1)){
                temp = *(p+j+1);
                *(p+j+1) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    cout<<"The ordered array is :";
    for (int i=0;i<5;i++){
            cout<<*(p+i)<<" ";
    }


	return 0;
}


