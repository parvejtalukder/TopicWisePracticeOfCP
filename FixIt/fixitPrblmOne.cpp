#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    long long n, k;
    cin >> n >> k;
    vector <long long> arr;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x; 
        arr.push_back(x);
    }
    map <long long, long long> mrr;
    for(long long i = 0; i < n; i++) {
        if (mrr.find(k - arr[i]) != mrr.end()) {
            cout << mrr[k - arr[i]] + 1 << " " << i + 1 << "\n";
            return 0;
        }
        mrr[arr[i]] = i;
    }
    cout << "IMPOSSIBLE" << "\n";
    // brote force
    // long long ansIndex[2];
    // bool ansBool = false;
    // for(int i = 0; i < n; i++) {
    //     for(int j = i + 1; j < n; j++) {
    //         if (arr[i] + arr[j] == k) {
    //             ansIndex[0] = i; 
    //             ansIndex[1] = j;
    //             ansBool = true;
    //             break;
    //         }
    //     }
    // }
    // if (ansBool) {
    //     cout << ansIndex[0] + 1 << " " << 1 + ansIndex[1]<< "\n";
    // } else {
    //     cout << "IMPOSSIBLE" << "\n";
    // }
    return 0;
}