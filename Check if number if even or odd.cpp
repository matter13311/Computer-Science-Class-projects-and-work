#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter number: ";
cin>>a;

if(a==0)
    cout<<a<<" is neither negative or positive";
else if(a>0&&a%2==0)
    cout<<a<<" is a positive even number";
else if(a<0&&a%2==0)
    cout<<a<<" is a negative even number";
else if(a>0&&a%2!=0)
    cout<<a<<" is a positive odd number";
else if(a<0&&a%2!=0)
    cout<<a<<" is a negative odd number";
return 0;
}
