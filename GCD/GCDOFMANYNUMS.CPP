#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n; cin >> n;
    int result = 0;
    int arr[n]; for(int i = 0; i < n; i++) {
        cin >> arr[i];
        result = gcd(result, arr[i]);
    }; cout << result << "\n";
    return 0;
}
