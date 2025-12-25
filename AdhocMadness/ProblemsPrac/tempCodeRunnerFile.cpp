#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
}

int main() {
    pht();
    int n, k;
    int ans = 0;
    cin >> n >> k;
    vector <int> arr(n);
    vector <int> prefix_sum(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    prefix_sum[0] = arr[0];
    for(int i = 1; i < n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if ((prefix_sum[j] - prefix_sum[i - 1]) % k == 0) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}