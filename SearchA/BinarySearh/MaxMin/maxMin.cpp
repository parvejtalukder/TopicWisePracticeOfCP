#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k;
vector <int> arr;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

// is the sum >=  sums
bool machine(ll x) {
    for(int i = 0; i < n; i++) {
        if (arr[i] > x) return false;
    }
    int min_subarr = 1;
    ll current_sum = arr[0];
    for(int i = 1; i < n; i++) {
        if (current_sum + arr[i] <= x) {
            current_sum += arr[i];
        } else {
            min_subarr++;
            current_sum = arr[i];
        }
    }
    return min_subarr <= k;
}

int main() {
    pht();
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    ll l = 0, r = 2e14, ans = 0;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if (machine(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}