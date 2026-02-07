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
    string arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n, [](string a, string b) {
        return a + b < b + a;
    });
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << "\n";
    return 0;
}