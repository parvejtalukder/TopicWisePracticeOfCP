/*https://vjudge.net/problem/toph-tidy-bits#author=0*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n;
    cin >> n;
    int x = __builtin_popcount(n);
    for(int i = 0; i <= n; i++) {
        if (__builtin_popcount(i) == x) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}    