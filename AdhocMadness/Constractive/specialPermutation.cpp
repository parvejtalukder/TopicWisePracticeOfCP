#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> arr(n);
        for(int i = 0; i < n; i++) {
            arr[i] = (i + 1);
        }
        vector <int> two(arr);
        for(int i = 1; i < n; i++) {
            arr[i] = two[i - 1];
            // cout << arr[i] << " ";
        }
        arr[0] = two[n - 1];
        for(int i = 0; i < n; i++) {
            if (i != (n - 1)) {
                cout << arr[i] << " ";
            } else {
                cout << arr[i];
            }
        }
        cout << "\n";
    }
    return 0;
}