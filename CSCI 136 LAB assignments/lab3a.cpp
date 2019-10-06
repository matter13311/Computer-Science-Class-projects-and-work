/*
Author: <Matthew Liang>
Course: {135,136}
Instructor: <Alexey Nikolaev>
Assignment: <Direct Approach>
Program takes user input, and throws it into a loop, and then into a formula.
*/
#include<iostream>
using namespace std;
int main()
{
int n, k, c, NK;
int filler = 1;
int sum = 2;
cout<<"Input value for n: ";
cin>>n;
cout<<"Input value for k: ";
cin>>k;


while(n<k)//checks to make sure that k is not bigger value than n, or else the program will brick itself.
    {
        cout<<"please enter correct values."<<endl;
        cout<<"Input value for n: ";
        cin>>n;
        cout<<"Input value for k: ";
        cin>>k;
    }
    if(n==0)//if n is equal to 0, then skip all multiplication and output 0.
        {
                    cout<<"C(N,K) is 1";//uses short cut that if n = 0, then the value is automatically 1.
        }

        else
        {
            NK = n - k;

            if(NK == 1)
                {
                    NK = 1;
                }
                else
                    {
                        NK = NK + 1;//this block of program is used to find out what the value is when n-k is subtracted. And then takes that value and uses ! on it.
                        while(sum!=NK)
                            {
                                filler = filler*sum;
                                sum++;
                            }
                    }
                    NK = filler;

                    sum = 2;
                    filler = 1;


        n = n+1;
            while(sum!=n)//takes value of n and uses ! on it.
                {
                    filler = filler*sum;
                    sum++;
                }
        n = filler;

            sum = 2;
            filler = 1;

        k = k+1;//takes value of k and uses ! on it.
            while(sum!=k)
                {
                    filler = filler*sum;
                    sum++;
                }
            k = filler;

c = n/(k*NK);
cout<<"C(N,K) is "<<c<<endl;
    }
}
