#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void print(map <int, int> mm) {
    for(auto [a, b]: mm) {
        cout << "D " << a << " " << b << "\n";
    }
    cout << string(20, '-') << "\n";
}

int main() {
    pht();
    int n;
    cin >> n;
    map <int, int> mp;
    while(n--) {
        string s;
        int n;
        cin >> s >> n;
        if (s == "add") {
            mp[n]++;
        } else if (s == "rem") {
            if (mp.find(n) != mp.end()) {
                mp[n]--;
                if (mp[n] == 0) {
                    mp.erase(n);
                }
            } 
        }
        // print(mp);
        cout << mp.size() << " ";
    } 
    cout << "\n";
    return 0;
}