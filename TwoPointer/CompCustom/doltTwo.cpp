#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    long long n;
    cin >> n;
    cin.ignore();
    vector <string> str;
    while(n--) {
        string s;
        cin >> s;
        str.push_back(s);
    }
    sort(str.begin(), str.end(), [](string a, string b) {
        return a + b < b + a;
    });
    for(auto one: str) {
        cout << one;
    }
    cout << "\n";
    return 0;
}