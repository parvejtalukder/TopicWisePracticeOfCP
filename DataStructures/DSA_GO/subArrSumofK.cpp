#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n, k;
    cin >> n >> k;
    int arr[n  + 1];
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    queue <int> qrr;
    for(int i = 1; i <= k; i++) {
        qrr.push(arr[i]);
        sum += arr[i];
    }
    // 2 3 4
    for(int i = k; i <= n; i++) {
        cout << sum << "\n";
        // queue <int>::iterator it
        sum -= qrr.front();
        // cout << sum << "\n";
        qrr.pop();
        if (arr[i + 1] <= n) {
            // cout << "D " << qrr.front() << "\n";
            qrr.push(arr[i + 1]);
            sum += arr[i + 1];
        }
    }
    // while(n--) solve();
    return 0;
}