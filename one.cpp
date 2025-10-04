/*https://codeforces.com/problemset/problem/266/A*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int testCase;
    string colorsCode;
    cin >> testCase;
    cin >> colorsCode; int coutMove = 0;
    for(int i = 0; i <= colorsCode.size() - 1; i++) {
        if (colorsCode[i] == colorsCode[i + 1]) {
            ++coutMove;
        }
    }
    cout << coutMove << endl;
    return 0; 
}