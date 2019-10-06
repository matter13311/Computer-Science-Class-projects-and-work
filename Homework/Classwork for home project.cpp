#include<iostream>
#include<string>
using namespace std;
int main()
{
//Matthew Liang
string b;
int i = 0;
int j = 0;
int o = 0;
int c;
char a = 'a';
int finder;
int alphabet = 0;
int counter;
int letters;
do
{
    cout<<"Enter letters only: ";
    getline(cin,b);
    counter = 0;
    i = 0;
    while(b[i]!='\0')
    {
        if((b[i]<'A')||(b[i]>'Z'&&b[i]<'a')||(b[i]>'z'))//Checks if user input are letters
            {
                counter++;
            }
        i++;
    }
}
while(counter>0);

if(counter==0)
    {
        j = 0;
        while(b[j]!='\0')
        {
            if(b[j]>='A'&&b[j]<='Z')//Converts capital letters to lowercase letters if there is capital letters
            {
                b[j]=b[j]+32;
            }
        j++;
    }
if(counter==0)
    {
    while(a<='z')
        {
            finder=0;
            o=0;
                while(b[o]!='\0')
                    {
                        if(b[o]==a)
                            {
                                finder++;
                            }
                        o++;
                    }
            a=a+1;
            if(finder>0)
            {
                alphabet++;
            }
        }
    letters = 26-alphabet;
    cout<<letters<<" letters are not used in the input string"<<endl;
    }
return 0;
    }
}
