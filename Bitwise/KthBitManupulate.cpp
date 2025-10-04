/*https://vjudge.net/problem/codechef-bitmagic*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        unsigned int n, k; cin >> n >> k;
        n = n | (1 << k);
        cout << n << endl;
    }
    return 0;
}