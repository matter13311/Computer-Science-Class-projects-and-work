#include<iostream>
using namespace std;
int main()
{
    for ( ; ; )

    {
        char symbol;
        short code;

        cout<<"Enter letters:"<<endl;
        cin>>symbol;

        code = symbol;

        cout<<code<<endl;
        cout<<"_______________________________________________________________________________"<<endl;





        int a;
        int b;

        cout<<"Please enter number that you want to be squared."<<endl;
        cout<<"Number:";
        cin>>a;

        b = a*a;

        cout<<a<<" squared is "<<b<<endl;
        cout<<"________________________________________________________________________________"<<endl;

        float time,kilogram;
        cout<<"Enter a number to divide by 300,000."<<endl;

        cout<<"Number:";
        cin>>kilogram;
        time=kilogram/300000;
        cout<<time<<endl;
        cout<<"________________________________________________________________________________"<<endl;

        float kilo;
        float pound;


        cout<<"______Pound to kilogram converter______"<<endl;
        cout<<"Please enter pound:";
        cin>>pound;


        cout<<"You entered "<<pound<<" for pound."<<endl;
        kilo = pound/2.2;

        cout<<"The kilogram is "<<kilo<<endl;
        cout<<"________________________________________________________________________________"<<endl;

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



return 0;
}
