#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void printFun(int i, int n, int s, int st) {
    if (i > n) return;
    if (s > 0) {
        cout << " ";
        printFun(i, n, s - 1, st);
    }
    else if (st > 0) {
        cout << "*";
        printFun(i, n, s, st - 1);
    }
    // move to next line
    else {
        cout << "\n";
        printFun(i + 1, n, n - (i + 1), 2 * (i + 1) - 1);
    }
}

int main() {
    pht();
    int n;
    cin >> n;

    printFun(1, n, n - 1, 1);

    return 0;
}