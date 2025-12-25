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
    ans = s / n;
    if (s % n >= 1) {
        ++ans;
    }
    cout << ans << "\n";
    return 0;
}