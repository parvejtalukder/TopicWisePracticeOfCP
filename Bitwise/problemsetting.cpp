/*https://vjudge.net/problem/codeforces-258a*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    
    // int n, l, r, x;
    // cin >> n >> l >> r >> x;
    // int prob[n];

    // for(int i = 0; i < n; i++) {
    //     cin >> prob[i]; 
    // }

    int bits[3] = {1, 2, 3};

    int passedCount = 0, sumOfDif = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = i; j < 3; j++) {
            // if ()
            cout << bits[j] << " ";
        }
        cout << endl;
    } 

    return 0;
}    