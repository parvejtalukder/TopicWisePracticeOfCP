#include <bits/stdc++.h>
// #define Add(a, b) a + b
// #define isEven(n) (n >> 0) & 1

using namespace std;

int main() {
    // int n;
    while(1) {
        int n; cin >> n;
        if (n == 0) return 0;
        if (!((n >> 0) & 1)) {
            cout << "Even";
        } else {
            cout << "Odd";
        }
        cout << endl; 
    }
    // cout << Add(5, 1) << endl;
    return 0;
}