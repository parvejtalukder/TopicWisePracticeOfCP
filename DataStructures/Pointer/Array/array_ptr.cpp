#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

vector <int> arr;

int main() {
    pht();
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++) {
        if (i != n - 1) {
            cout << arr[i] << " ";
        } else {
            cout << arr[i] << "\n";
        }
    }
    return 0;
}