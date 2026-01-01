#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    pht();
    string s;
    cin >> s;
    // int cnt = 0;
    set <int> arr;
    for(char a: s) {
        arr.insert(a);
    }
    int cnt = arr.size();
    if (cnt % 2 == 0) {
        cout << "CHAT WITH HER!" << "\n";
    } else {
        cout << "IGNORE HIM!" << "\n";
    }
    return 0;
}
