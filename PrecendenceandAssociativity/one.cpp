#include<bits/stdc++.h>
using namespace std;

int main() {
  int a = 5, b = 3, c = 4;
  cout << a + b * c << '\n';  
  cout << (a + b) * c << '\n';
  cout << a - b + c << '\n';  
  cout << (a << b + c) << '\n';  
  cout << (a * b / c) << '\n'; 
  cout << (a / b * c) << '\n';  
  cout << (a | b & c) << '\n'; 
  cout << (a ^ b | c) << '\n'; 
  cout << (a ^ b & c) << '\n'; 
  cout << (a + b == c) << '\n'; 
  return 0;
}