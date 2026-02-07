#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    long long n;
    cin >> n;
    long long arr[n + 1];
    long long prs[n + 1];
    prs[0]= 0;
    for(long long i = 1; i <= n; i++) {
        cin >> arr[i];
        prs[i] = prs[i - 1] + arr[i];
        prs[i] %= n;
        prs[i] = (prs[i] + n) % n;
    }
    long long ans = 0;
    map <long long, long long> mp;
    mp[prs[0]]++;
    for(long long i = 1; i <= n; i++) {
        ans += mp[prs[i]];
        mp[prs[i]]++;
    }
    cout << ans << "\n";
    return 0;
}