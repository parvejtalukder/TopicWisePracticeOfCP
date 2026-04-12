#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int sumOfNum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    pht();
    int n;
    cin >> n;
    int cnt = 0;
    int start = 19;
    while(true) {
        if (sumOfNum(start) == 10) {
            cnt++;
            if (cnt == n) {
                cout << start << "\n";
                break;
            }
        }
        start++;
    }
    return 0;
}