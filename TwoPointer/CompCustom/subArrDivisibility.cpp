#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// long long prefix[]

int main() {
    pht();
    int n;
    cin >> n;
    int arr[n + 1];
    int pre[n + 1];
    pre[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        pre[i] = pre[i - 1] + arr[i];
        pre[i] %= n;
        pre[i] = (pre[i] + n) % n;
    }
    long long ans = 0;
    map <int, int> mp;
    mp[0]++;
    for(int i = 1; i <= n; i++) {
        ans += mp[pre[i]];
        mp[pre[i]]++;
    }
    cout << ans << "\n";
    return 0;

}