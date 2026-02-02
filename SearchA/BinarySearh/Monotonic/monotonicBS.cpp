#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int N = 1e6 + 7;
int arr[N];

int binarySearch(int l, int r) {
    int ans = -1;
    while(l <= r) {
        int mid = (l + r )/2;
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
        cin >> arr[i];
    }
    cout << binarySearch(0, n - 1) << "\n";
    return 0;
}