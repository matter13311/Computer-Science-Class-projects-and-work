#include<iostream>
using namespace std;
int main()
{
    float c;
    float f;

    cout<<"Fahrenheit to Celsius converter "<<endl;

    cout<<"Enter Fahrenheit:";

    cin>>f;

    c = (f-32.0)*(5.0/9.0);
    cout<<f<<" F is "<<c<<" Celsius.";

    float a;

    a = 2+5/(2*1.0);

    cout<<a;

    short // 2 bytes  1 byte = 8 bits. in each bit u can write a 0 or 1.

    int // 4 bytes
    long
    unsigned short //Each integer of short takes 2 bytes
    unsigned int //Each int takes 4 bytes
    //Each time you use int variable, the program uses 2 additional bytes of memory. The less memory your program uses, the better. If you can afford to have short variable then use the short.
    //Short variables can store from a range of -32000 to 32000





return 0;
}
