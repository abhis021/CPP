//Program to give sum and absolute difference between two numbers given as a and b
//where taking input a and b then making equation like a=a+b and b=|a-b|
#include <iostream>
#include <cstdio>

using namespace std;

void update(int *a,int *b) {
    //code by abhis021@github
    int sum = *a + *b;
    int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = absDifference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}