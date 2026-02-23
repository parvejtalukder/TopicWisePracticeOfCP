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
    while(n--) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }
    sort(arr.begin(), arr.end(), [](pair <int, int> x, pair <int, int> y){
        return x.second < y.second;
    });
    int max_y = -1, ans = 0;
    for(auto [x, y]: arr) {
        if (x >= max_y) {
            max_y = y;
            ++ans;
        }
        // cout << x << " " << y << "\n";
    }
    cout << ans << "\n";
    return 0;
}