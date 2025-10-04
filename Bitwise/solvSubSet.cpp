#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s; cin >> n >> s; int arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool isFound = false;
    for(int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                sum+=arr[i];
            }
        }
        if (sum == s) {
            cout << "Yes" << endl;
            isFound = true;
            break;
        }
    }
    if(isFound != true) {
        cout << "No" << endl;
    }
    return 0;
}