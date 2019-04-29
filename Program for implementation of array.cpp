//A program to implement arrays in such a way that the numbers input are cout while in reverse order and separated by a space.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //code by abhis021@github

    int N, i = 0;
    cin >> N;
    int *A = new int[N];
    while (cin >> A[i++] && (i < N));
    while (cout << A[--N] << ' ' && N);
    delete[] A;

    return 0;
}
