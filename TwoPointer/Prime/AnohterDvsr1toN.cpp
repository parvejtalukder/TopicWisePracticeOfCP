#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    cout << "STR" << "\n";
    int n = 1e3;
    int arr[n+1];
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if (j % i == 0) {
                arr[j]++;
            }
        }
    }
    cout << "END" << "\n";
    return 0;
}