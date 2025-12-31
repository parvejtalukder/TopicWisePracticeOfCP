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
    arr.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int r, a, b;
    cin >> r;
    cin >> a >> b;
    arr.erase(arr.begin() + (r - 1));
    arr.erase(arr.begin() + (a - 1), arr.begin() + (b - 1));
    int s = arr.size();
    cout << s << "\n";
    for(int i = 0; i < s; i++) {
        if (i != s - 1) {
            cout << arr[i] << " ";
        } else {
            cout << arr[i] << "\n";
        }
    }
    return 0;
}