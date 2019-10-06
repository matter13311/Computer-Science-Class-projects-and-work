#include<iostream>
#include<string>
using namespace std;
int main()
{

string inp;
int i, leng;

getline(cin,inp);

leng = inp.length();

for(i=0;i<leng;i++)
    cout<<inp[i]<<" ";

return 0;
}
