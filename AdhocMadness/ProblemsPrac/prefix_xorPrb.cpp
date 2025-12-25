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
    int ans = 0;
    vector <int> prefix_xor(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++) {
        prefix_xor[i] = prefix_xor[i - 1] ^ arr[i];
    }
    for(int i = 0; i< n; i++) {
        for(int j = i; j < n; j++) {
            if (prefix_xor[j] == prefix_xor[i - 1]) {
                ans++;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}