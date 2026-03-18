#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool prime(int n) {
    vector <int> dv;
    for(int i = 1; 1LL * i * i <= n; i++)  {
        if (n % i == 0) {
            // cout << i << " " << n/i << "\n";
            dv.push_back(i); 
            if (i != n/i) {
                dv.push_back(n/i); 
            }
        }
    }
    return dv.size() == 2;
}

int main() {
    pht();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if (prime(i)) {
            cout << i << " ";
        }
    }
    cout << "\n";
    // if (dv.size() == 2) {
    //     cout << "Prime" << "\n";
    // } else {
    //     cout << "Not Prime" << "\n";
    // }
    // if (dv.size() % 2 == 0) {
    //     cout << "NOT SQUARE" << "\n";
    // } else {
    //     cout << "SQUARE" << "\n";
    // }
    // sort(dv.begin(), dv.end());
    // for(auto n: dv) cout << n << "\n";
    return 0;
}