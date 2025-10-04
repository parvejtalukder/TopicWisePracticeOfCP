/*https://vjudge.net/problem/hackerrank-si-swap-bits*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

// int toBin (int n) {
//     string bin = "";
//     while(n > 0) {
//         int b = n % 2;
//         bin = char(b + '0') + bin;
//         n /= 2;
//     }
//     for(int i = 0; i < bin.size() - 1; i += 2) {
//         swap(bin[i], bin[i + 1]);
//     }
//     int num = 0;
//     for (char c : bin) {
//         num = num * 10 + (c - '0');
//     }
//     long long decimal = 0; int base = 1;
//     while(num > 0) {
//     int lastDigit = num % 10;
//         decimal += lastDigit * base;
//         base *= 2;
//         num /= 10;
//     }
//     return decimal;
// }

int main() {
    pht();
    int tCase;
    cin >> tCase;
    while(tCase--) {
        unsigned int n;
        cin >> n;
        unsigned ans = 0;
        for(int k = 0; k < 32; k += 2) {
            int a = (n >> k) & 1;
            int b = (n >> (k + 1)) & 1; 
        swap(a, b);
        // cout << n << endl;
        if (a) {
            ans += 1 << k;
        } 
        if (b) {
            ans += 1 << (k + 1);
        }
        }
        cout << ans;
        if (tCase != 0) {
            cout << " ";
        } else {
            cout << endl;
        }
    }
    return 0;
}    