#include<iostream>
using namespace std;
int main()
{
float input;
float volume;
cin>>input;
if(input>=0)
{

    volume = (4/3)*3.14*input*input*input;
    cout<<volume;
}
else
    {
        cout<<"error";
}

return 0;
}
