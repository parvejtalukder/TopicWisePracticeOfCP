#include <bits/stdc++.h>
using namespace std;

string chars = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// char sendIt(char ch) {
//     auto fi = find(chars.begin(), chars.end(), ch);
//     if (fi != chars.end() && fi != chars.begin()) {
//         fi--;
//         return *fi;
//         // cout << *fi; 
//     } 
//     // for(int i = 0; i < )
//     // if (ch )
//     return ch;
// }

int main() {
    pht();
    string inp;
    // getline(cin, inp);
    while(getline(cin, inp)) {
        for(int i = 0; i < inp.size(); i++) {
            if (inp[i] == ' ') {
                cout << inp[i];
            } else {
                auto fi = find(chars.begin(), chars.end(), inp[i]);
                if (fi != chars.begin() && fi != chars.end()) {
                    cout << *(fi - 1);
                }
                // cout << inp[i - 1];
                // cout << sendIt(inp[i]);
            }
        }
        cout << "\n";
    }
    // cout << "\n";
    return 0;
}