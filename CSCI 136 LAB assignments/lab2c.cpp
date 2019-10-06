/*
Author: <Matthew Liang>
Course: {136}
Instructor: <Alexey Nikolaev>
Assignment: <Task C. Modeling social dynamics>

checks if all user inputted numbers are negative. Then runs number through formula, and spits it back out in loops.
*/
#include<iostream>
using namespace std;
int main()
{
double p0;
double p1;
int sum = 0;
double g;
double h;
double M;
int years;

cout<<"Enter the initial population (p0): ";//checks to see if entered value is less than 0.
cin>>p0;
while (p0 < 0)
    {
        cout<<"Re-enter initial population: ";
        cin>>p0;
    }


cout<<"Enter the growth rate (g): ";
cin>>g;
while (g <= 0)
    {
        cout<<"Re-enter growth rate: ";
        cin>>g;
    }


cout<<"Enter the death rate (h): ";
cin>>h;
while (h<=0)
    {
        cout<<"Re-enter death rate(h): ";
        cin>>h;
    }


cout<<"Enter the maximum capacity (M): ";
cin>>M;
while (M<=0)
    {
        cout<<"Re-enter maximum capacity (M): ";
        cin>>M;
    }

cout<<"Enter the number of years to simulate (years): ";
cin>>years;
while (years<0)
    {
        cout<<"Re-enter years: ";
        cin>>years;
    }

//p0, p1, g, h, M, years=n
p1 = p0;
while(sum<=years)//sum = 0. if sum is less than years, then repeat the loop
{
cout<<sum<<" "<<p1<<endl;
p1 = p1+(g*p1)-(h*p1)-((g*(p1*p1)/M));//loop basically consists of the formula to compute population.
sum++;
}


}
//I inputted 10, 1.25, 0.2, 100, and 11, for population, growth, death, capacity, and years respectively
//and the output is
//0   10
//1   19.25
//2   34.8305
//3   56.2379
//4   75.754
//5   83.5623
//6   84.0195
//7   83.999
//8   84
//9   84
//10  84
//11  84
