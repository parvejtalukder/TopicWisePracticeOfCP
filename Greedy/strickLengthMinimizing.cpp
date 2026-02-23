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
    int arr[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
    long long median = arr[(n + 1)/2];
    long long ans = 0;
    for(int i = 1; i <= n; i++) {
        ans += abs(arr[i] - median);
    }
    cout << ans << "\n";
    return 0;
}