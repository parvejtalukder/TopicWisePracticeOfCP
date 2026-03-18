#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int divisorCnt(long long n) {
    int cnt = 0;
    for(int i = 1; 1LL * i * i <= n; i++) {
        if (n % i == 0) {
            ++cnt;
            if (i != n/i) {
                ++cnt;
            }
        }
    }
    return cnt;
}

int main() {
    pht();
    long long n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        // cout << divisorCnt(i) << "\n";
    }
    // cout << "\n";
    return 0;
}