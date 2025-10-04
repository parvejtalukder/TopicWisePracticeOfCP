#include <bits/stdc++.h>
using namespace std;

vector <long long> mamo;

long long f(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    if (mamo[n] != -1) {
        return mamo[n];
    }
    mamo[n] = f(n - 1) + f(n - 2);
    return mamo[n]; 
}

int main() {
    int n = 50;
    mamo.assign(n+1, -1);
    cout << f(n) << endl;
    return 0;
}