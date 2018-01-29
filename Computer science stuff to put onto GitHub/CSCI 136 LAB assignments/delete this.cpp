#include<iostream>
using namespace std;
main()
{
    int squareHeight, squareWidth;
    cout<< "Enter Height:  ";
    cin>>  squareHeight;
    cout<< "Enter Widht:   ";
    cin>>  squareWidth;
  for(int width=1; width<=squareHeight; width++)//lets say squareheight is 6 and squarewidth is 5
    {
   if(width <= 1)//if width<=1, which is true then
   for(int width=1; width<=squareWidth; width++)//if width is <= squarewidth(5). then width ++, width is now 2. 2 is <5 so another star
   //width++ so now width is 3. 3<5 so *. 4<5 *. width is now 5.
                cout<< "*";
    }
        else if(width<squareHeight)//width which is 5, is < than square height (6) so
        {
            cout<< endl;//end the line and
        for(int width2=1; width2<=squareWidth; width2++)//width2 is 1. width2 is <sqaure width (5). so
            {
                if(width2==1 || width2==squareWidth)//if width2 ==1 which is true. then print *.
                //then width2 ++, so now it's 2. width 2 is not = to 1, so space
                    cout<< "*";
                else
                    cout<< " ";
            } //end of for  variable width2
        }// end of else if
        else
        {
            cout<< endl;
            for(int width3=1; width3<=squareWidth; width3++)
            {
                cout<<"*";
            }//end of for having variable width3
        }// end of else
    }// end of first for loop
}// end of main function
