#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
}

int main() {
    pht();
    int n, s;
    cin >> n >> s;
    int ans = 0;
    // while(s >= n) {
    //     ++ans;
    //     s -= n;
    //     // n -= s;
    // }
    // if (s >= 1) {
    //     ++ans;
    // }
    // ans = s / n; 
    // if (s % n >= 1) {
    //     ++ans;
    // }
    ans = ceil((double)s/n);
    cout << ans << "\n";
    return 0;
}