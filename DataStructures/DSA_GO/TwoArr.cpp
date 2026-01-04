#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n, m;
    cin>> n >> m;
    multiset <int> arr;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.insert(x);
    }
    for(int i = 0; i < m; i++) {
        int x; cin >> x;
        arr.erase(x);
    }
    cout << arr.size() << "\n";
    return 0;
}