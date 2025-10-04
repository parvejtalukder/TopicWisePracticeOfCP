/*https://vjudge.net/problem/hackerrank-flipping-bits*/
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
        unsigned int num;
        cin >> num;
        cout << (~num) << endl;
    }
    return 0;
}    