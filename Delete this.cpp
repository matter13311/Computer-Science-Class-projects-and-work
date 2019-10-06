#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
int counter = 0;
cout<<"Enter sentence"<<endl;
getline(cin,str);
int i = 0;
while(str[i]!='\0')
{
    if (str[i]=='a') counter++;
    i++;
}
cout<<"There are "<<counter<<" A in that word"<<endl;



return 0;
}
