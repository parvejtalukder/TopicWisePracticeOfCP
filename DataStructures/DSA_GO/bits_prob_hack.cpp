#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
string s[N];
bitset <N> bs[N];

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

// int dist(string a, string b) {
//     int diff = 0, siz = a.size();
//     for(int i = 0; i < siz; i++) {
//         diff += a[i] != b[i];
//     }
//     return diff;
// }

int main() {
    pht();
    int n, k;
    // size_t aa = n;
    int ans = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        bs[i] = bitset<N>(s[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if ((bs[i] ^ bs[j]).count() <= k) {
                ++ans;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}