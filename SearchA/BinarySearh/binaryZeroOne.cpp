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

int search(int l, int r) {
    int ans = -1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == 1) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    pht();
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    // sort(arr.begin(), arr.end()); 
    cout << search(0, n - 1) << "\n";
    return 0;
}