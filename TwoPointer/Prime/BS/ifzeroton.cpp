#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t_case, n;
    cin >> t_case >> n;
    cin.ignore(); int cnt = 0;
    while(t_case--) {
        string num;
        cin >> num;
        set <char> arr(num.begin(), num.end());
        if ((int)arr.size() == n + 1) {
            bool ok = true;
            for(auto x: arr) {
                int digit = x - '0';
                if (digit > n || 0 > digit) {
                    ok = false;
                    break;
                }
            }
            if (ok) cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}