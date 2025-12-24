#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector <int> arrInt(N);
long long sufixSum[N];

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arrInt[i];
    }
    sufixSum[n - 1] = arrInt[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        sufixSum[i] = sufixSum[i + 1] + arrInt[i];
    } 
    int q; cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        long long sum = sufixSum[l] - sufixSum[r + 1];
        cout << sum << "\n";
    }
    return 0;
}