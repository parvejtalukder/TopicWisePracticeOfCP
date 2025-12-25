#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
}

int main() {
    pht();
    int n, sum;
    cin >> n >> sum;
    vector <int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i = 0, sumAns = 0, ans = 0;
    sort(arr.rbegin(), arr.rend());
    while(sumAns < sum) {
        sumAns += arr[i];
        ++ans;
        ++i;
    }
    cout << ans << "\n";
    return 0;
}