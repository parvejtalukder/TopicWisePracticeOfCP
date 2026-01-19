#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;
    list <int> arr;
    int arrSum = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        // cin >> arr[i];
        arr.push_back(x);
    }
    auto max = max_element(arr.begin(), arr.end());
    arr.erase(max);
    arr.push_front(*max);
    // erase(max)
    // cout << *max <<  "\n";
    // return;

    for(int i = 0; i < n; i++) {
        auto maxx = max_element(arr.begin(), arr.end());
        arrSum += *maxx;
    }
    cout << arrSum << "\n";

}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
