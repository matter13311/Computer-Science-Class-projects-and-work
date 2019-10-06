#include<iostream>
using namespace std;
int main()
{
double n, k, c, sum, filler, m, z;
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

                 /*   sum = 0;
                    filler = k;
                    z = (1+(n-k)/k);

                    while(sum!=filler)
                        {
                            z = (1+(n-k)/k);
                            m = (1+(n-k)/k+1);  <----- INCOMPLETE. Can't figure it out. I'm not positive how to use type-casting.
                            z = z*m;
                            k++;
                            sum++;
                        }
                cout<<"c(n,k)= "<<z;
            }
}

