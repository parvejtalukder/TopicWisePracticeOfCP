#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

// int q;
vector <int> arr;
vector <int> qrr;

bool search(int l, int r, int q) {
    if (l > r) return false;
    int mid = (l + r) / 2;
    if (arr[mid] == q) {
        return true;
    } else if (arr[mid] < q) {
        return search(mid + 1, r, q);
    } else {
        return search(l, mid - 1, q);
    }
}

int main() {
    pht();
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end()); 
    for(int i = 0; i < q; i++) {
        int y; cin >> y;
        qrr.push_back(y);
    }
    for(int i = 0; i < q; i++) {
        bool res = search(0, n - 1, qrr[i]);
        if (res == true) {
            cout << "found" << "\n";
        } else {
            cout << "not found" << "\n";
        }
    }
    return 0;
}