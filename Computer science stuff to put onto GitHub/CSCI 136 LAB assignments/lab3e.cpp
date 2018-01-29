/*
Author: <Matthew Liang>
Course: {135,136}
Instructor: <Alexey Nikolaev>
Assignment: <long int instead of int>
Same program as lab3a but int is replaced with long int.
*/
#include<iostream>
using namespace std;
int main()
{
long int n, k, c, NK;
int filler = 1;
int sum = 2;
cout<<"Input value for n: ";
cin>>n;
cout<<"Input value for k: ";
cin>>k;


while(n<k)
    {
        cout<<"please enter correct values."<<endl;
        cout<<"Input value for n: ";
        cin>>n;
        cout<<"Input value for k: ";
        cin>>k;
    }
    if(n==0)
        {
                    cout<<"C(N,K) is 1";//uses short cut that if n = 0, then the value is automatically 1.
        }

        else
        {
            NK = n - k;

            if(NK == 1)//
                {
                    NK = 1;
                }
                else
                    {
                        NK = NK + 1;
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
            while(sum!=n)
                {
                    filler = filler*sum;
                    sum++;
                }
        n = filler;

            sum = 2;
            filler = 1;

        k = k+1;
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
/*smaller numbers work when using task a program and task e program. But larger numbers don't work for both of them
c(12,6) which should equal 924 is outputted for both lab3e and lab3a. However once c(13,6), which should equal 1718, doesn't work for both programs.
It could be that my program is faulty.
*/
