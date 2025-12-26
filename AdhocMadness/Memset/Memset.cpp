#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    pht();
    int n, i;
    cin >> n >> i;
    if (n & (1 << i)) {
        cout << "true" << "\n";
    } else {
        cout << "false" << "\n";
    }
    return 0;
}    