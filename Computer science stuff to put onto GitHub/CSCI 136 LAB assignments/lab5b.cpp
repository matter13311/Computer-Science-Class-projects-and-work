/*
Author: <Matthew Liang>
Course: {135,136}
Instructor: < Alexey Nikolaev>
Assignment: <Vigenere Encryption>

Program performs the Vigenere encryption
*/
#include<iostream>
#include<string>
using namespace std;

string encryptVigenere(string plaintext, string keyword)//formula
    {
                string finalProduct = "";
                for(int i=0;plaintext[i]!='\0';i++)
                {
                    if(plaintext[i]>='A'&&plaintext[i]<='Z')//checks if character is Capital
                        {
                            finalProduct += char (int (plaintext[i] + (keyword[i]-1) - 65) %26 + 65);
                        }
                    else if (plaintext[i]>='a'&&plaintext[i]<='z')//checks if character is lowercase
                        {
                            finalProduct += char(int(plaintext[i] + (keyword[i]-1) - 97) %26 +97);
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
string plaintext, done, keyword;

cout<<"Enter plaintext: ";
getline(cin,plaintext);//I use getline to take into account spaces


cout<<"Enter keyword: ";
cin>>keyword;

done = encryptVigenere(plaintext, keyword);//calls the function encryptCaesar and assigns the result to done.
cout<<"Ciphertext: "<<done;//prints out done.



}
//INCOMEPLETE
