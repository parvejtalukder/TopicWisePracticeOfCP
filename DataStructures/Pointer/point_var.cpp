#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    pht();
    int a = 8;
    int* b = &a;
    *b = 10;
    cout << a << " " << b << "\n";
    return 0;
}