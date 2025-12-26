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
    for(int i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    while(true) {
        bool have = 
        next_permutation(arr, arr + n);
        if (!have) break;
        for(int i = 0; i < n; i++) {
            if (i != n - 1) {
                cout << arr[i] << " ";
            } else {
                cout << arr[i] << "\n";
            }
        }
    }
    return 0;
}