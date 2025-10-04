/*https://vjudge.net/problem/hackerrank-si-swap-bits*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

// int checkKthBit(int x, int k) {
//     return (x >> k) & 1;
// }

// int unSetKthBit(int x, int k) {
//     return x & (~(1 << k));
// }

int main() {
    pht();
    int number, bitnum;
    cin >> number >> bitnum;
    cout << (number & ((1 << 30) - (1 << bitnum))) << endl;
    return 0;
}    