#include<iostream>
using namespace std;
int main()
{
    for ( ; ; )
    {


            float zero;
            float one;
            float add1;
            float add2;
            float subtract;
            float result;
        cout<<"t0: ";
        cin>>zero;
        cout<<"t1: ";
        cin>>one;

        add1 = -16*one*one+106*one;
        add2 = -16*zero*zero+106*zero;
        cout<<"add1: "<<add1<<endl;

        cout<<"add2: "<<add2<<endl;


        subtract = add1-add2;
        cout<<"Subtracted: "<<subtract<<endl;
        result = subtract/(one-zero);
        cout<<result<<endl;
    }
return 0;
}
