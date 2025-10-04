#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht(); int n; 
    cin >> n; int anArr[n];
    int arr[n]; int sum = 0; int j;
    for(int i = 0, j = n - 1; i < n, j >= 0; i++, j--) {
        cin >> arr[i];
        anArr[j] = arr[i];
    } 
    // cout << sum << endl;
    for(int i = 0; i < n; i++) {
        cout << anArr[i] << endl;
    }
    return 0;
}