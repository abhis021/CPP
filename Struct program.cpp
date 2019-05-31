//Program using struct input multiline and output single line like age,firstname,
//lastname,each separated by onewhite space.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//code by abhis021@github
struct Student {
  unsigned age{};
  std::string first_name{};
  std::string last_name{};
  unsigned standard{};
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}

