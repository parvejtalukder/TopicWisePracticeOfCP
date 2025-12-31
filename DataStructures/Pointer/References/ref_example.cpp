#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

vector <int> arr;

int main() {
    pht();
    int x = 5;
    int &y = x;
    cout << x << " " << y << "\n";
    cout << &x << " " << &y << "\n";
    return 0;
}