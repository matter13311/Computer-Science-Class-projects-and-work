#include <iostream>
using namespace std;
int main()
{

{
    for ( ; ; )
    {float age;
    cout<<"How old are you? Don't Lie!"<<endl;
    cin>>age;
    if (age > 8 && age < 80) cout<<"Ok, I believe you."<<endl;
    else if (age > 0 && age <8)
        cout<<"I don't believe you. You're too young to even be able to use this program"<<endl;

    else if (age <0)
        cout<<"You're not even born yet!"<<endl;
    else if (age <100 && age >=80)
        cout<<"Hmmmmm, kind of suspicious. You're quite old then."<<endl;
    else if (age >= 100 && age < 500)
        cout<<"You're mad old! You're one of the oldest people alive!"<<endl;
    else if (age >= 500)
        cout<<"You're so old you should be an artifact!"<<endl;
    else if (age == 500 || age == 600)
    }

}
return 0;
}
