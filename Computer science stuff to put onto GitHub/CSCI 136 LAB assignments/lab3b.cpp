/*
Author: <Matthew Liang>
Course: {135,136}
Instructor: <Alexey Nikolaev>
Assignment: <Organization, skipping some factors>
Program takes user input, and throws it into a loop with a formula that cuts down on multiplication required.
*/


#include<iostream>
using namespace std;
int main()
{
int n, k, c, sum, filler, m;
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
                cout<<"C(N,K) is 1";
        }

        else
        {
            //these are comments if user choose N = 10 and k = 3.
        m = n+1;//m = 11
        n = (n-k)+1;//n = 8
        filler = n; //filler = 8
        sum = n + 1; // sum = 9
            while(sum!=m)//if sum is not equal to 11
                {
                    filler = filler*sum;//filler = 8 * 9
                    sum++;//sum++ makes 9 = 10.
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

    }
c = n/k;
cout<<"C(n,k) is "<<c;
}
