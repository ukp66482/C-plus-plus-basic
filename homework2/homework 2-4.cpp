#include <iostream>
using namespace std;
bool isprimefactor(int N, int i);
int main()
{
    int N;
    
    
    do{
	
        cout << "Please enter an integer N (or 0 to leave) : " << endl;
        cin >> N;
        if(N>0){
            cout << "The prime factors of N are shown below: " << endl;
            for (int i=2;i<=N;i++){
            	isprimefactor(N,i);
            		
            }
        }
        else if(N<0)
            cout << "You enter a wrong N, please enter again !" << endl;
        cout << "------------------------------ " << endl;
    }while(N!=0);
    return 0;
}
//Write your codes here

bool isprimefactor(int N, int i)
{
if(N%i==0){
                    int counts = 0;
                    for (int j=1;j<=i;j++){
                        if (i%j==0){
                            counts++;
                        };
                    };
                    if(counts==2)
                        cout << i << " is the prime factor of " << N <<endl;
                };
};

