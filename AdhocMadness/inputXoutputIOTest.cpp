#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    pht();
    string s;
    getline(cin, s);
    int ans = 0;
    int size = s.size();
    for(int i = 0; i < size; i++) {
        if (s[i] == ' ') {
            ans++;
        }
    }
    cout << ans + 1 << "\n";
    return 0;
}    