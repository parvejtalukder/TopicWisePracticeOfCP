#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    pht();
    int a, b;
    string s = "50 500";
    stringstream ss(s);
    ss >> a>> b;
    cout << a << " " << b << endl;
    return 0;
}