#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    auto multp = [](int a, int b) -> int {
        return a * b;
    };
    cout << multp(6, 5) << "\n";
    return 0;
}