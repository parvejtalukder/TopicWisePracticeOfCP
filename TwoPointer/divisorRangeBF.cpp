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
    sort(dv.begin(), dv.end());
    for(auto n: dv) cout << n << "\n";
    return 0;
}