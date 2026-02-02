#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    auto get_sum = [](int a, int b) -> int {
        return a + b;
    };
    cout << get_sum(5, 6) << "\n";
}