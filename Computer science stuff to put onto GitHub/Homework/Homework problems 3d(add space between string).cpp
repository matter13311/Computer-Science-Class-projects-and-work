#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i = 0;
    getline(cin,str);
    while(str[i]!='\0')
    {
        cout<<str[i]<<" ";
        i++;
    }

return 0;
}
