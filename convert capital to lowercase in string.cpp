#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
int i;
getline(cin,str);
i = 0;
while (str[i]!='\0')
{
if(str[i]>='A'&&str[i]<='Z')
    str[i]=str[i]+32;//adding 32 converts capital to lowercase according to ASCII table
i++;
}
cout<<str<<endl;


return 0;
}
