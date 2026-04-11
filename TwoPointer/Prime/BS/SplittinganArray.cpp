#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k;
vector <int> arr;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool Ok(ll x) {
    ll current_seg = 1;
    ll current_sum = 0;
    for(int i = 0; i < n; i++) {
        if (current_sum + arr[i] <= x) {
            current_sum += arr[i];
        } else {
            if (arr[i] > x) {
                return false;
            }
            current_sum = arr[i];
            current_seg++;
        }
    }
    return current_seg <= k;
}

int main() {
    pht();
    cin >> n >> k;
    while(n--) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    n = arr.size();
    ll ans = 0;
    ll l = *max_element(arr.begin(), arr.end());
    ll r = accumulate(arr.begin(), arr.end(), 0LL);
    while(l <= r) {
        ll mid = (l + r) / 2;
        if (Ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    } 
    cout << ans << "\n";
    return 0;
}