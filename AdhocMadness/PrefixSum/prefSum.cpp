#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> arr(N);
long long prefixSum[N];

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    prefixSum[0] = arr[0];
    for(int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    int q; cin >> q;
    while(q--) {
        int l, r; 
        cin >> l >> r; 
        long long sum = prefixSum[r] - prefixSum[l - 1];
        cout << sum << "\n";
    }
    return 0;
}