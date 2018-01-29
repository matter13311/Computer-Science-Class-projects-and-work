#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i = 0;
    int counter = 0;
    getline(cin,str);
    while(str[i]!='\0')
       {

        if(str[i]<'0'||str[i]>'9')counter++;


            i++;
       }
       if(counter>0)
        cout<<"error";
       else cout<<"okay";


return 0;
}
