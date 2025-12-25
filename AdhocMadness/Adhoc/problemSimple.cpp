#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
}

int main() {
    pht();
    int term;
    cin >> term;
    while(term--) {
        string word;
        cin >> word;
        int len = word.size();
        if( len > 10) {
            cout << word[0] << len - 2 << word[len - 1] << "\n";
        } else {
            cout << word << "\n";
        }
    }
    return 0;
}