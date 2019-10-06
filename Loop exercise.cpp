#include<iostream>
using namespace std;
int main()
{
    //WRITE A PROGRAM THAT TAKES INPUT A,B AND MULTIPLES A BY ITSELF B TIMES.
int a,b;
int result;
cin>>a;
cin>>b;
result=1;
int i = 0;
while (i<b)
{
    result=result*a;
    i++;
}
cout<<result<<endl;




return 0;
}
