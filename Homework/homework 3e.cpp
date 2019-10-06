#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i = 0;
cout<<"Enter string: ";
getline(cin,str);
while(str[i]!='\0')
{
    if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i]+32;
        i++;
}
cout<<str;

return 0;
}
