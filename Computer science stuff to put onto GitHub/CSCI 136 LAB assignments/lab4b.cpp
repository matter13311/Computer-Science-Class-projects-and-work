/*
Author: <Matthew Liang>
Course: {135,136}
Instructor: <Alexey Nikolaev>
Assignment: <Direct Approach>
Program asks user for a number and makes a triangle with it
*/

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
