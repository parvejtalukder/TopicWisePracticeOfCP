#include <bits/stdc++.h>
using namespace std;

int n, k;
vector <int> arr;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
// is median >= x;
bool ans(int x) {
    long long minimum_operation = 0;
    for(int i = n/2; i < n; i++) {
        if(arr[i] < x) {
         minimum_operation += x - arr[i];
        }
    }
    return minimum_operation <= k;
}

int main() {
    pht();
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    int l = 0, r = 2e9, ans_wer = 0;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if (ans(mid)) {
            ans_wer = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans_wer << "\n";
    return 0;
}