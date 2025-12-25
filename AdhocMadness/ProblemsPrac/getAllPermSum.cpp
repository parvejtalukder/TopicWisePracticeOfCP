#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    int ans_sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    for(int i = 0; i < n; i++) {
        ans_sum += arr[i] * sum;
    }
    cout << ans_sum << "\n";
    // cout << arr[0] * sum << "\n";
    return 0;
}