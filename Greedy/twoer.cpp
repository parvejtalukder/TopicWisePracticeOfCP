#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    multiset <int> twar;
    for(int i = 0; i < n; i++) {
        // cin >> arr[i];
        int x;
        cin >> x;
        // twar.insert(x);
        auto it = twar.upper_bound(x);
        if (it != twar.end()) {
            twar.erase(it);
            twar.insert(x);
        } else {
            twar.insert(x);
        }
    }
    cout << twar.size() << "\n";
    return 0;
}