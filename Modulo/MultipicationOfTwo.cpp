#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int a = 1e9, b = 20000000, m = 1e9 + 7;
    cout << ( 1LL * a * b) % m << "\n";
    cout << 1LL * (a % m) * (b % m) % m << "\n";
    return 0;
}
