/*https://vjudge.net/problem/hackerrank-diagonal-difference*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    int matrix[n][n]; int ii = 0, jj = n;
    int sumRtoL = 0, sumLtoR = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (i == j) sumLtoR += matrix[i][j];
            if (i + j == n - 1) sumRtoL += matrix[i][j];
        }
    }
    cout << abs(sumLtoR - sumRtoL) << endl;
    return 0; 
}