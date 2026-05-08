#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    long long n, x;
    cin >> n >> x;
    long long arr[n];
    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map <long long,long long> mp;
    for(long long i = 0; i < n; i++) {
        if (mp.find(x - arr[i]) != mp.end()) {
            cout << mp[x - arr[i]] + 1 << i + 1 << "\n";
            return 0;
        }
        mp[arr[i]] == i;
    }
    cout << "IMPOSSIBLE" << "\n";
    return 0;
}