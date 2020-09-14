//code by abhis021@github
#include<iostream>
#include<math.h>
int main()
{
    int a, b, c;
    int a1, a2, a3;
    int valid=0;
    system("cls");
    printf("Enter first side of the triangle: ");
    scanf("%d", &a);
    printf("Enter second side of the triangle: ");
    scanf("%d", &b);
    printf("Enter third side of the triangle: ");
    scanf("%d", &c);
    //checking whether a triangle is valid or not
    if(a>0&&a<=100&&b>0&&b<=100&&c<=100)
    {
        if((a+b)>c&&(b+c)>a&&(c+a)>b)
        {
            valid =1;
        }
        else
        {
            valid=-1;
        }
    }
    if(valid==1)
    {
        a1=(a*a+b*b)/(c*c);
        a2=(b*b+c*c)/(a*a);
        a3=(c*c+a*a)/(b*b);
        if(a1<1||a2<1||a3<1)
        {
                printf("Obtuse angled triangle");
        }
        else if(a1==1||a2==1||a3==1)
        {
            printf("Right angled triangle");
        }
        else{
            printf("Acute angled triangle");
        }
    }
    else if(valid==-1)
    {
        printf("\nInvalid Triangle");
    }
    else
    {
        printf("\nInput Values are Out of range");
    }
}
