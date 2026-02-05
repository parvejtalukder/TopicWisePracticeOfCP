#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int a, b;
    cin >> a >> b;
    auto sum = [&](int a, int b) -> int {
        return a + b;
    };
    auto mul = [&](int a, int b) -> int {
        return a * b;
    };
    cout << "SUM " << sum(a,b)<< "\n"; 
    cout << "MUL " << mul(a,b)<< "\n"; 
    // cout <<< "\n";
}