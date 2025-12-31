#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

void mul(int& n) {
    n *= 10;
}

int main() {
    pht();
    int n; 
    n = 10;
    mul(n);
    cout << n << "\n";
    return 0;
}