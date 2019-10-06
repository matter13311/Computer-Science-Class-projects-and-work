#include<iostream>
using namespace std;
int main()
{
    int f;
    float a;
    float b;
    float c;
    float d;

    int i = 0;
while(i<1)
{

    cout<<"Enter number for which you want to go to "<<endl;
    cout<<"1. Lb to Kg "<<endl;
    cout<<"2. Kg to Lb "<<endl;
    cout<<"3. Close program"<<endl;

    cin>>f;

    if (f==1)
    {
        cout<<"Enter Lb you want to convert"<<endl;
        cin>>a;
        b = a*.45359237;
        cout<<a<<" Lb is "<<b<<"kg"<<endl;
    }
    else if (f==2)
    {
        cout<<"Enter Kg you want to convert"<<endl;
        cin>>c;
        d = c/.45359237;
        cout<<c<<" Kg is "<<d<<"lb"<<endl;
    }
    else if (f==3)
    {
        cout<<"Program will now end"<<endl;
        i++;
    }
    else if (f!=1||f!=2||f!=3)
    {
        cout<<"Can't you read? It says enter only 1 or 2, why the fuck are you entering something else?"<<endl;
    }

}


return 0;
}
