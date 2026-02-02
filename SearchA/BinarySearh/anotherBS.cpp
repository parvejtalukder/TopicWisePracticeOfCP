#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int q;
vector <int> arr;
// vector <int> qrr;

bool search(int l, int r) {
    while(l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == q) {
            return true;
        } else if (q > arr[mid]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return false;
}

int main() {
    pht();
    int n;
    cin >> n >> q;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end()); 
    cout << boolalpha << search(0, n - 1) << "\n";
    return 0;
}