#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int N = 1e5 + 9;
int day[N][3];
int ans[N][3];
// int a[3] = {arr[]}

int calc(int i, int j) {
    if (i < 0) {
        return 0;
    }
    if (ans[i][j] != -1) {
        return ans[i][j];
    }
    int mx = 0;
    for(int k = 0; k < 3; k++) {
        if (k != j) {
            mx = max(mx, calc(i - 1, k) + day[i][k]);
        }
    }
    return ans[i][j] = mx;
}

int main() {
    pht();
    int n;
    cin >> n;
    day[n][3]; 
    for(int i = 0; i < n; i++) {
        cin >> day[i][0] >> day[i][1] >> day[i][2];
    }
    memset(ans, -1, sizeof(ans));
    cout << calc(n - 1, 3) << "\n";
    return 0;
}