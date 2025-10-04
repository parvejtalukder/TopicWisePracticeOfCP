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

void coutOnBits(int x) {
    int cnt = 0;
    for(int k = 0; k < 32; k++) {
        if (checkKthBit(x, k)) {
            // cout << k << " ";
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    pht();
    int n;
    cout << "Your Number in Dec:" << endl;
    cin >> n;
    coutOnBits(n);
    return 0;
}