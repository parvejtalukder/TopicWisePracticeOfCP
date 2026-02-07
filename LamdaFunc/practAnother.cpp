#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool camp(pair<int, int> x, pair<int, int> y) {
    return x >= y;
}

int main() {
    pht();
    vector <pair<int, int>> prr = {{1, 2}, {2, 1}, {1, 3}, {3, 1}, {9, 2}, {2, 5}};
    sort(prr.begin(), prr.end(), camp);
    for(auto [x, y]: prr) {
        cout << x << " " << y << "\n";
    }
    return 0;
}