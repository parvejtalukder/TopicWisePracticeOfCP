#include <bits/stdc++.h>
using namespace std;

int n, k;
vector <int> arr;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    // auto lb = lower_bound(arr.begin(), arr.end(), k);
    // auto ub = upper_bound(arr.begin(), arr.end(), k);
    // cout << "LB : " << (lb - arr.begin()) << "\n";
    // cout << "UB : " << (ub - arr.begin()) << "\n";
    // cout << "AP : " << (ub - lb) << "\n";
    cout << "FOUND :" << boolalpha << binary_search(arr.begin(), arr.end(), k) << "\n";
    return 0;
}