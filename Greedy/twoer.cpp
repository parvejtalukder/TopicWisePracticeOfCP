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
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 1;
    int last = arr[0];
    for(int i = 1; i < n; i++) {
        if (arr[i] > last) {
            ans++;
            last = arr[i];
        }
    }
    cout << ans << "\n";
    return 0;
}