#include <iostream>
#include <fstream>
using namespace std;

int main () {
ofstream file;
string name,home,job,like;
file.open("HW3_2.txt");
file<<"What's your name?\n";
cout<<"What's your name?"<<endl;
getline(cin,name);
file<<name<<endl;
file<<"Where do you live?\n";
cout<<"Where do you live?"<<endl;
getline(cin,home);
file<<home<<endl;
file<<"What do you do?\n";
cout<<"What do you do?"<<endl;
getline(cin,job);
file<<job<<endl;
file<<"Do your like programming?\n";
cout<<"Do your like programming?"<<endl;
getline(cin,like);
file<<like<<endl;

return 0;
}

