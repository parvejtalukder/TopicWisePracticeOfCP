#include<bits/stdc++.h>
using namespace std;

void pht() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
}

int main() {
  pht();
  int n;
  cin >> n;
  set <int> s = {1, 2, 50, 60, 2, 7};
  auto lb = s.lower_bound(n);
  auto ub = s.upper_bound(n);
  cout << *lb << "\n";
  cout << *ub << "\n";
  // auto it = s.find(n);
  // if (it != s.end()) {
  //   cout << "YES" << " " << *it << "\n";
  // } else {
  //   cout << "NO" << "\n";
  // }
  return 0;
}