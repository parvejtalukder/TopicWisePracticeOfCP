#include<bits/stdc++.h>
using namespace std;

int get_index_1(vector<int> v, int i) { 
  return v[i];
}

int get_index_2(vector<int> &v, int i) { 
  return v[i];
}

int32_t main() {
  int n = 1e6;
  vector<int> v(n, 2);
  int sum1 = 0;
  for (int i = 0; i < n; i++) { 
    sum1 += get_index_1(v, i);
  }
  cout << sum1 << '\n';

  int sum2 = 0;
  for (int i = 0; i < n; i++) { 
    sum2 += get_index_2(v, i);
  }
  cout << sum2 << '\n';
  return 0;
}