#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    vector <pair<int, int>> arr = {
        {1,1}, {2,3}, {3,1}, {4,5}, {5,2}, {6,1}, {7,8}
    };
    // sort(arr.begin(), arr.end(), cmp);
    for(auto [x, y]: arr) {
        cout << x << " " << y << "\n";
    }
    return 0;
}