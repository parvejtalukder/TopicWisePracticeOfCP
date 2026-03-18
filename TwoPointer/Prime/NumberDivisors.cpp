#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int count(int n) {
    int ans = 0;
    for(int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans++;
            if (i != n/i) {
                ans++;
            }
        } 
    }
    return ans;
}

int main() {
    pht();
    for(int i = 1; i <= 100; i++) {
        cout << count(i) << "\n";
    }
    return 0;
}