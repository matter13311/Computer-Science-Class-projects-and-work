#include<iostream>
using namespace std;
int main()
{
    for ( ; ; )
        {char letter;
        cout<<"Enter letter or number and I will tell you if it's a number or letter."<<endl;
        cin>>letter;
        //if symbol us between A-Z or between a-z it's a letter. On ascii table A=65 Z=30 a=97 z=122
        if ((letter >= 'A' && letter <='Z') || (letter >='a' && letter <='z'))
            cout<<"It's a letter."<<endl;
        else cout<<"It's a number."<<endl;

        float one;
        cout<<"Enter number:";
        cin>>one;
        if(one >= 0 && one <=100) cout<<"Good"<<endl;
        else cout<<"Not good"<<endl;
        }




return 0;
}
