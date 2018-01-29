/*
Author: <Matthew Liang>
Course: {135,136}
Instructor: <Alexey Nikolaev>
Assignment: <Direct Approach>
Program takes user input, and throws it into a loop and then checks if it needs to use another formula to further shorten the amount of multiplication required.
*/
#include<iostream>
using namespace std;
int main()
{
int n, k, c, sum, filler, m, z;
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
            }
            z = n - k;
            if (z>k)//z = n - k. In this case, n = 11, k = 2. Z = 11-2 which equals 9. If z(9) is greater than k(2), then do k! normally.
            {
                k = k+1;
                    while(sum!=k)
                        {
                            filler = filler*sum;
                            sum++;
                        }
                    k = filler;
            }
            else//if we choose n = 11 and k = 9. z would equal 2. and z = 2. Since 2 is not greater than 9, it would use the formula (n,n-k).
            {
                k = n - k;
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


//steps for computing (11,2) and (11,9)
//Using the formula c(n,k) = c(n,n-k)
//Using the above formula on (11,2) resulted in most multiplication (1*2*3*4*5*6*7*8*9*10*11/1*2*3*4*5*6*7*8*9)
//using the above formula on (11,9) resulted in least multiplication (1*2*3*4*5*6*7*8*9*10*11/1*2)
//The formula should only be used if the k variable is a close to the value of n.

