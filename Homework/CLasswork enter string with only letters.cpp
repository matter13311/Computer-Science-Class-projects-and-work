#include<iostream>
#include<string>
using namespace std;
int main()
{
bool a;
a = true;
string b;
int i = 0;
int counter;
do
{
    cout<<"Enter letters only"<<endl;
    getline(cin,b);
    counter = 0;
    while(b[i]!='\0')
    {
        if(b[i]<65&&b[i]>90||b[i]<97&&b[i]>122)
            counter++;
            i++;
            cout<<counter;
    }
}
while(counter>0);
cout<<"Good";



return 0;
}
