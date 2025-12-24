#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int a = 1e9, b = 1e9, m = 27;
    cout << (a + b) % m << "\n";
    cout << (a % m + b % m) % m << "\n";
    return 0;
}