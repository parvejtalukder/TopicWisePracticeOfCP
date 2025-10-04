/*https://vjudge.net/problem/codeforces-258a*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

const int n = 1e5 + 9;
char bits[n];

int main() {
    pht();
    cin >> bits;
    int bitLen = strlen(bits);
    int firstZero = -1;

    for(int i = 0; i < bitLen; i++) {
        if (bits[i] == '0') {
            firstZero = i;
            break;
        }
    }

    if (firstZero == -1) {
        for(int i = 0; i < bitLen - 1; i++) {
            cout << 1;
        }
    } else {
        for(int i = 0; i < bitLen; i++) {
            if (i != firstZero) {
                cout << bits[i];
            }
        }
    }

    cout << endl;

    return 0;
}    