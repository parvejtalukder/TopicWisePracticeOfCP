#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<long long>());
    long long sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        } else {
            break;
        }
    }
    cout << sum << "\n";
    return 0;
}
