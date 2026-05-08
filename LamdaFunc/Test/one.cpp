#include <bits/stdc++.h>
using namespace std;

int n, m;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int get_id(int i, int j) {
    return i * m + j;
}

int main() {
    pht();
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int f[n * m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            f[get_id(i, j)] = arr[i][j];
        }
    }
    for(int i = 0; i < n *m; i++) {
        cout << f[i] << "\n";
    }
    return 0;
}