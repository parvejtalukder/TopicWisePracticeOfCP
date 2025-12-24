#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int a = 3, b  = 10, c = 6, d = 8; 
    cout << gcd(gcd(gcd(a, b), c), d) << "\n";
    return 0;
}
