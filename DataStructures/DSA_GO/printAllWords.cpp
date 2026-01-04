#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map <string, int> mp;
    while (ss >> word) {
        mp[word]++;
        // cout << word << " ";
    }
    // sort(mp.begin(), mp.end());
    for(auto [x, y]: mp) {
        cout << x << " " << y << "\n";
    }
    // cout << endl;
    return 0;
}