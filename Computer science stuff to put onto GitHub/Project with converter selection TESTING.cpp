#include<iostream>
using namespace std;
int main()
{
    for ( ; ; )

{

    int one;

cout<<"type number to use that converter."<<endl;

cout<<"1.Square"<<endl<<"2.Divide by 300,000"<<endl<<"3.Pound to kilogram converter"<<endl<<"4.Get volume, diameter and area from radius."<<endl<<"5. Check if even or odd."<<endl;
cout<<"Type number of code you want to use:";
cin>>one;
if (one == 1)
        {int a;
        int b;

        cout<<"Please enter number that you want to be squared."<<endl;
        cout<<"Number:";
        cin>>a;
        b = a*a;
        cout<<a<<" squared is "<<b<<endl;
        }

else if (one == 2)
        {float time,kilogram;
        cout<<"Enter a number to divide by 300,000."<<endl;

        cout<<"Number:";
        cin>>kilogram;
        time=kilogram/300000;
        cout<<time<<endl;
        }
else if (one == 3)
{
    float kilo;
        float pound;


        cout<<"______Pound to kilogram converter______"<<endl;
        cout<<"Please enter pound:";
        cin>>pound;


        cout<<"You entered "<<pound<<" for pound."<<endl;
        kilo = pound/2.2;

        cout<<"The kilogram is "<<kilo<<endl;
}
else if (one == 4)
{
     float radius, volume, area, diameter;

        cout<<"Insert radius to convert to volume and area"<<endl;
        cout<<"Radius:";
        cin>>radius;

        volume = (4.0/3.0)*3.14*radius*radius*radius;
        area = 4*3.14*radius*radius;
        diameter = radius*2;

        cout<<"Diameter:"<<diameter<<endl;
        cout<<"Volume:"<<volume<<endl;
        cout<<"Area:"<<area;

}
else if (one == 5)
    {
    int inp;
    cout<<"Enter number to check if it's even or odd."<<endl;
    cin>>inp;
    if (inp%2 == 0) cout<<"Even"<<endl;
    else cout<<"Odd"<<endl;
    }
else if (one == 6)
    {
        float first;
        float second;
        float third;
        cout<<"Enter two numbers to divide by each other.";
        cout<<"First number:";
        cin>>first;
        cout<<"Second number:";
        cin>>second;
        if (second == 0) cout<<"You cannot divide by 0"<<endl;
        else third = first/second;
        cout<<third<<endl;

    }

}

return 0;
}
