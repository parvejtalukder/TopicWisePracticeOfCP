#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void print(int start, int end) {
    cout << start << "\n";
    if (start == end) {
        return;
    }
    start++;
    print(start, end);
}

int main() {
    pht();
    int n;
    cin >> n;
    print(1, n);
    return 0;
}