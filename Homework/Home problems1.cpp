#include<iostream>
using namespace std;
int main()
{
    float price;
    float radius;
    float square;
    float area;
    cout<<"Enter price: "<<endl;
    cin>>price;
    cout<<"Enter radius: "<<endl;
    cin>>radius;
    area=3.14*radius*radius;
    cout<<"area is "<<area<<endl;
    square=price/area;
    cout<<"Price per square inch is "<<square;
    return 0;
}
