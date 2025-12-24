#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

int main() {
    pht();
    vector <int> arrInt;
    int seqTill, arrSize;
    cin >> seqTill >> arrSize;
    int arrXor = 0, seqXor = 0;
    for(int i = 0; i < arrSize; i++) {
        int x; cin >> x;
        arrInt.push_back(x);
        arrXor ^= arrInt[i];
    }
    for(int i = 1; i <= seqTill; i++) {
        seqXor ^= i;
    }
    cout << (arrXor ^ seqXor) << "\n"; 
    return 0;
}