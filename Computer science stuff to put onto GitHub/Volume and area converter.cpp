#include<iostream>
using namespace std;
int main()
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



return 0;
}
