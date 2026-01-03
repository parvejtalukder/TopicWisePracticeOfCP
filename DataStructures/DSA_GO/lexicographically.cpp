#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    string one = "abcd";
    string two = "abce";
    cout << boolalpha << (one == two) << "\n";
    cout << boolalpha << (one > two) << "\n";
    cout << boolalpha << (one < two) << "\n";
    return 0;
}