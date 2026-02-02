#include <bits/stdc++.h>
using namespace std;

int s;
vector <int> arr;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool yes(int x) {
    int n = arr.size();
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i] / x;
    }
    return sum >= s;
}

int main() {
    pht();
    int n;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    int ans = -1;
    int l = 0, r = 1e9;
    while(l <= r) {
        int mid = (l + r) / 2;
        if (yes(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
    return 0;
}