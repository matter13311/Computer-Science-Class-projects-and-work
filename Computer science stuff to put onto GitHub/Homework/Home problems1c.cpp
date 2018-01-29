#include<iostream>
using namespace std;
int main()
{
float price, percent, total;
cout<<"Enter price: ";
cin>>price;
cout<<"Enter Tax rate: ";
cin>>percent;
total = price+price*(percent/100);
cout<<"The total price is "<<total;
return 0;
}
