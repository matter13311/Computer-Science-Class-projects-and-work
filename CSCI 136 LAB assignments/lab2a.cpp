
/*
Author: <Matthew Liang>
Course: {136}
Instructor: <Alexey Nikolaev>
Assignment: <Task A. Input validation>

Checks to see if the user input is between 1 and 100, and then squares the user inputted number
*/



#include <iostream>
using namespace std;
int main()
{
int n;

cout<<"Please enter an integer: ";
cin>>n; //asks user to input a number

while((n<1)||(n>100))//If the number is less than 1, or greater than 100, then it will ask user to re-enter a number
{
    cout<<"Please re-enter: ";
    cin>>n;
}

n = n*n; //since you can't use ^ to square, i toke the user inputted number, after it went through the checking process. It times the number by itself to square.


cout<<"Number squared is "<<n<<endl;
}
//first inputted 0, and 101 and it outputted "re-enter"
//then i inputted 40 and it outputted 1600.
