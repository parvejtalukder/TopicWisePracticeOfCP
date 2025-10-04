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

bool isPowerOfTwo(int x) {
    int cnt = 0;
    for(int k = 0; k < 32; k++) {
        if (checkKthBit(x, k)) {
            // cout << k << " ";
            cnt++;
        }
    }
    if (cnt == 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    pht();
    isPowerOfTwo(4) ? cout << "Yes" : cout << "No" << endl;
    return 0;
}