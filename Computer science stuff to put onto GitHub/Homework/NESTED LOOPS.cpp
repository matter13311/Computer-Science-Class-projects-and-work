#include<iostream>
using namespace std;
int main()
{
int i, o;
int input;
cout<<"ENTER NUMBER: ";
cin>>input;
for(o=0;o<input;o++)
{
    for(i=0;i<input-o;i++)
    {
        cout<<"* ";
    }
    cout<<endl;
}


return 0;
}
