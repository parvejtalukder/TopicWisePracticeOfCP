#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    int n;
    cin >> n;
    vector <string> arr;
    for(int i= 0; i < n; i++) {
        string x;
        cin >> x;
        arr.push_back(x);
        // int a, b, c, d, e;
        // cin >> a >> b >> c >> d >> e;
        // arr.push_back(make_tuple(a, b, c, d, e));
        // cin >> x >> y;
        // arr.push_back(make_pair(dist(x, y), make_pair(x, y)));
    }
    sort(arr.begin(), arr.end());
    for(auto str: arr) {
        cout << str << "\n";
        // cout << a << " " << b << " " << c << " " << d << " " << e << "\n"; 
    }
}

int main() {
    pht();
    int n;
    cin >> n;
    while(n--) solve();
    return 0;
}