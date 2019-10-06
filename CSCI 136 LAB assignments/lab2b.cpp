/*
Author: <Matthew Liang>
Course: {136}
Instructor: <Alexey Nikolaev>
Assignment: <Sum from 1 to n>

writes a program and checks to see if integer is between 1 and 50. Then gets the sum from 0, to user inputted number

*/




#include <iostream>
using namespace std;
int main()
{
int sum = 0;
int n;
int b;

cout<<"Please enter n: ";
cin>>n;

while((n<1)||(n>50))//checks to see if user inputted integer is between 1-50
    {
        cout<<"Please re-enter: ";
        cin>>n;
    }
b = n; //set b to what number the user chose.
while(sum<n) //sum = 0, so if sum is less than n, continue loop
    {
        b = b+sum; // b, which is equal to n, is added with the value of sum.
        sum++; //sum is added +1 after the end of the loop.
    }
    n = b; // set the value of b to n. B has gone through the loop, and carries the correct value of the answer

    cout<<"sum is "<<n;

}
//first i inputted negative number, and it said re-enter, then i inputted 60, and it said re-enter.
//then i inputted 50 and 20, and it outputted 210 and 1275, respectively.

