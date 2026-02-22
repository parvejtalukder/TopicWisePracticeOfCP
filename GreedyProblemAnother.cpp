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
    vector <pair<int, int>> arr;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    sort(arr.begin(), arr.end(), [](pair <int, int> a, pair<int, int> b){
        return a.second < b.second;
    });
    int ans = 0;
    int the_max = -1;
    for(auto [x, y]: arr) {
        if (x >= the_max) {
            the_max = y;
            ++ans;
        }
        // cout << x << " " << y << "\n";
    }
    cout << ans << "\n";
    return 0;
}