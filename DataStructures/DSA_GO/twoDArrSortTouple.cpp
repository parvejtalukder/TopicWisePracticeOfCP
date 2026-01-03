#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

double dist(int x, int y) {
    return sqrt(x * x + y * y);
}

void solve() {
    int n;
    cin >> n;
    vector <tuple<double, int, int>> arr;
    for(int i= 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr.push_back(make_tuple(dist(x, y), x, y));
    }
    sort(arr.begin(), arr.end());
    for(auto [a, x, y]: arr) {
        cout << x << " " << y << "\n"; 
    }
}

int main() {
    pht();
    int n;
    cin >> n;
    while(n--) solve();
    return 0;
}