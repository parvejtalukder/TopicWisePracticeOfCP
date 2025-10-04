#include <bits/stdc++.h>
using namespace std;

int facto(int n);

int main() {
    int n; n = 5;
    cout << facto(n) << endl;
    return 0;
}

int facto(int n) {
    if (n == 0) {
        return 1;
    }
    return n * facto(n - 1);
}