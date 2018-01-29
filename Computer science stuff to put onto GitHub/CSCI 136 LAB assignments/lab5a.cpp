/*
Author: <Matthew Liang>
Course: {135,136}
Instructor: < Alexey Nikolaev>
Assignment: <Caesar encryption <ab A>

Program performs the Caesar encryption
*/
#include<iostream>
#include<string>
using namespace std;

string encryptCaesar(string plaintext, int rshift)//function to compute the Caesar encryption
    {
        string finalProduct = "";
        for(int i=0;plaintext[i]!='\0';i++)//loop to check if it has ran into the end of the string. Because all strings end with '\0'
        {
            if(plaintext[i]>='A'&&plaintext[i]<='Z')//checks if character is Capital
                {
                    finalProduct += char (int (plaintext[i] + rshift - 65) %26 + 65);
                }
            else if (plaintext[i]>='a'&&plaintext[i]<='z')//checks if character is lowercase
                {
                    finalProduct += char(int(plaintext[i] + rshift - 97) %26 +97);
                }
            else
            {
                finalProduct += plaintext[i];//if plaintext[i] is not capital or lowercase, than keep it the same it is.
            }

        }
            return finalProduct;
    }
int main()
{
string plaintext, done;
int rshift;
cout<<"Enter plaintext: ";
getline(cin,plaintext);//I use getline to take into account spaces


cout<<"Enter shift: ";
cin>>rshift;

while(rshift<0 || rshift>26)//checks to see if shift is between 0 and 26
    {
        cout<<"Please enter a shift between 0 and 26: ";
        cin>>rshift;
    }
done = encryptCaesar(plaintext, rshift);//calls the function encryptCaesar and assigns the result to done.
cout<<"Ciphertext: "<<done;//prints out done.
}
