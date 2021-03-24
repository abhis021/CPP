#include<iostream>
using namespace std;
int main()
{
    int side1, side2, side3, match=0;
    cout<<"Enter length of side1"<<endl;
    cin>>side1;
    cout<<"Enter length of side2"<<endl;
    cin>>side2;
    cout<<"Enter length of side3"<<endl;
    cin>>side3;
    if(side1==side2)
        match=match+1;
    else if(side1==side3)
        match=match+2;
    else if(side2==side3)
        match=match+3;
    if(match==0)
    {
        if((side1+side2)<=side3)
            cout<<"not a triangle";
        else
        {
            if((side1+side3)<=side2)
                cout<<"not a triangle";
        else
            cout<<"triangle is scalene";

        }
    }
        else if(match==2)
    {
        if((side1+side3)<=side2)
            cout<<"not a triangle";
        else
            cout<<"triangle is isosceles";
    }
    else if(match==3)
    {
        if((side2+side3)<=side1)
            cout<<"not a triangle";
        else
            cout<<"triangle is isoscleles";
            }
        else
            cout<<"triangle is equilateral";
    }
