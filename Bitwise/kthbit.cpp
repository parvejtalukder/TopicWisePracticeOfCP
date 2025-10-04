/*https://codeforces.com/problemset/problem/633/A*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int checkKthBit(int x, int k) {
    return (x >> k) & 1;
} 

int setKthBit (int x, int k) {
    return k | (1 << k);
}

int main() {
    pht();
    int x = 11;
    // cout << checkKthBit(x, 2) << endl;
    cout << checkKthBit(x, 2) << endl;
    return 0;
}