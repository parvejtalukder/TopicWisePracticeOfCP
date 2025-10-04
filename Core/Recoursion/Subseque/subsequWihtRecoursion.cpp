#include <bits/stdc++.h>
using namespace std;

int n;
vector <int> a;
vector <bool> isTaken;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void rec(int pos) {
    if (pos > n) {
        for(int i = 1; i <= n; i++) {
            if(isTaken[i]) {
                cout << a[i] << " ";
            }
        }
        cout << endl;
        return;
    }
    isTaken[pos] = false;
    rec(pos +1);
    isTaken[pos] = true;
    rec(pos + 1); 
}

int32_t main() {
    pht();
    cin >> n;
    a.resize(n + 1);
    isTaken.resize(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    rec(1);
    return 0;
}