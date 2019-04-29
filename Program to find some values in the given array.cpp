//A program for reading specific locations of the arrays.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  //code by abhis021@github
  int a, b;
  cin >> a >> b;

  
  int **n = new int *[a]();

  
  for (int i = 0; i < a; i++) {
    
    int k;
    cin >> k;

    
    int *i_arr = new int[k]();

    
    for (int j = 0; j < k; j++) {
      cin >> i_arr[j];
    }

    
    n[i] = i_arr;
  }

  
  for (int b_num = 0; b_num < b; b_num++) {
  
    int i, j;
    cin >> i >> j;
    cout << n[i][j] << endl;
  }

  
  for (int i = 0; i < b; i++) {
    delete[] n[i];
  }
  delete[] n;

  return 0;
}