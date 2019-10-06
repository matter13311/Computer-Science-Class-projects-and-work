#include<iostream>
#include<string>
using namespace std;
int main()
//          {
            //string input;
            //cout<<"What is your name?";
            //You don't want to use CIN command because CIN command does not know how to deal with spaces.
            //getline(cin,input);
            //cout<<"Hi, motha fuckin "<<input<<endl;
            //cout<<input[3];
            //return 0;
            //}

//{
   // string str;
    //int i;
    //getline(cin,str);
    //i = 0;
    //while (str[i]!='\0')
    //{
    //i++;
    //}
    //cout<<"the length is "<<i<<endl;

    //return 0;
//}

{
    string str;
    char letter;
    cout<<"Enter word then a letter"<<endl;
    getline(cin,str);
    cin>>letter;
    int counter;
    counter = 0;
    int i = 0;
    while (str[i]!='\0')
    {
        if(str[i]==letter) counter++;

        i++;

    }


    cout<<"in the word "<<str<<" there are "<<counter<<" "<<letter<<endl;

}

