#include<iostream>
#include<math.h>

using namespace std;

main()
{
    system("cls");
    float a,b,c,s,r,area;
    int ch;

    cout<<"****Menu****\n 1.Area of circle\n 2.Area of Rectangle";
    cout<<"\n 3.Area of triangle\n 4. Area of Square\n 5. Exit \n Enter your choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
        {
            cout<<"\n Enter the radius of the circle:";
            cin>> r;
            if(r<1||r>100)
            {
                cout<<"Invalid Input";
                break;
            }
            area = 3.14*r*r;
            break;
        }
    case 2:
        {
            cout<<"\n Enter length and breadth: ";
            cin>>a>>b;
            if(a<1||a>100||b<1||b>100)
            {
                cout<<"Invalid Input";
                break;
            }
            area = a*b;
            break;
        }
    case 3:
        {
            cout<<"\n Enter three sides of the triangle:";
            cin>>a>>b>>c;
            if(a<1||a>100||b<1||b>100||c<1||c>100)
            {
                cout<<"Invalid Input";
                break;
            }
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            break;
        }
    case 4:
        {
            cout<<"\n Enter the side of the square: ";
            cin>>a;
            if(a<1||a>100)
            {
                cout<<"Invalid Input";
                break;
            }
            area=a*a;
            break;
        }
    case 5:
        {
            cout<<"exiting";
            system("exit");
        }
    }
}
