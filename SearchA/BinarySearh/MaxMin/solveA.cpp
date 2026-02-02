#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    int n, h, l;
    cin >> n >> h >> l;
    int r = 0, c = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= h) r++;
        if (x <= l) c++;
    }
    // int cnt = 0;
    // set <pair<int, int>> prr;
    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         cout << arr[i] << " " << arr[j] << "\n";
    //         // prr.insert({arr[i], arr[j]});
    //     }
    // }
    // cout << r << endl;
    // cout << c << endl;
    cout << min({r, c, (r + c)/2, (n/2)}) << "\n";
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}