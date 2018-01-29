/*
Author: <Matthew Liang>
Course: {135,136}
Instructor: <Alexey Nikolaev>
Assignment: <Box>
Program asks user for height and width. Then makes a box
*/


#include<iostream>
using namespace std;
int main()
{
    int i, o, k, u;
    int width, height;
    cout<<"ENTER WIDTH: ";
    cin>>width;
    cout<<"ENTER HEIGHT: ";
    cin>>height;



    while((width<0)&&(height<0))//checks to see if user input is not negative
    {
        cout<<"Please enter variables larger than 0"<<endl;
        cout<<"ENTER WIDTH: ";
        cin>>width;
        cout<<"ENTER HEIGHT: ";
        cin>>height;
    }

    for(i=0;i<width;i++)//prints the top of the square
        {
            cout<<"* ";
        }
            cout<<endl;

    for(o=0;o<height-2;o++)
        {
            for(k=0;k<width;k++)//prints the body of the square
            {
                if(k==0||k==width-1)
                {
                        cout<<"* ";
                }
                else
                {
                        cout<<"  ";
                }

            }
            cout<<endl;
        }
    for(u=0;u<width;u++)//prints the bottom of the square
        {
            cout<<"* ";
        }
    return 0;
}
