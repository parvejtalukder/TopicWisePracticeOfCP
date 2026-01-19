#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    int n, q;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> q; int ans = -1;
    for(int i = 0; i < n; i++) {
        if (arr[i] == q) {
            ans = i;
            break;
        }
    }
    if (ans != -1) {
        cout << "FOUND, INDX: " << ans << "\n"; 
    } else {
        cout << "NOT FOUND!" << "\n";
    }
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
