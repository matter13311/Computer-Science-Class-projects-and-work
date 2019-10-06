#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i = 0;
cout<<"Enter string: ";
getline(cin,str);
for(i=0;str[i]!='\0';i++)
{
    if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i]+32;
}
cout<<str;

return 0;
}
