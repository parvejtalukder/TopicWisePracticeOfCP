#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

int main() {
    pht();
    // vector <int> arrInt;
    int sizeArr; cin >> sizeArr;
    int regulerXor = 0, arrXor = 0;
    for(int i = 0; i < sizeArr - 1; i++) {
        int x; cin >> x; arrXor ^= x; 
    }
    for(int i = 1; i <= sizeArr; i++) {
        regulerXor ^= i;
    }
    cout << (regulerXor ^ arrXor) << endl;
    return 0;
}