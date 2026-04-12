#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// int count(int n) {
//     int ans = 0;
//     for(int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             ans++;
//             if (i != n/i) {
//                 ans++;
//             }
//         } 
//     }
//     return ans;
// }

// int count(long long n) {
//     int ans = 0;
//     for(long long i = 1; i <= n; i++) {
//         for(long long j = 1; j <= n; j++) {
//             if (j % i == 0) {
//                 dj[j]++;
//                 // dj.push_back(1);
//                 // ans++;
//             }
//         }
//     }
//     return ans;
// }

const int N = 1e3;
vector <int> dj(N);

int main() {
    pht();
    // int n; 
    // cin >> n;
    for(int i = 1; i <=N; i++) {
        for(int j = 1; j <= N; j++) {
            if (j % i == 0) {
                dj[j]++;
            }
        }
    }
    return 0;
}