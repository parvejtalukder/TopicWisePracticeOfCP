/*https://vjudge.net/problem/hackerrank-si-reverse-bits*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int test;
    cin >> test;
    while(test--) {
        int num;
        cin >> num;
        int bitsOfNum[32];
        for(int k = 0; k < 32; k++) {
            bitsOfNum[k] = (num >> k) & 1;
        }
        reverse(bitsOfNum, bitsOfNum + 32);
        unsigned int res = 0;
        for(int k = 0; k < 32; k++) {
            if (bitsOfNum[k]) {
                res += 1 << k;
            }
        }
        cout << res << " ";
    }
    cout << endl;
    return 0;
}    