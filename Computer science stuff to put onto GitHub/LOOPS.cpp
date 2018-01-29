#include<iostream>
using namespace std;
int main()
{
    int number;

    int i=0;
    while(i<10)
    {
        cout<<"Enter Number:";
        cin>>number;
        if (number%2==0)
        {
            cout<<"Even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }


    i=i+1; // ++i; i++; i=i+1; are all the same thing
    }





return 0;
}
