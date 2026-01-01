#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void print(map <int, string> m) {
    for(auto key = m.begin(); key != m.end(); key++) {
        cout << (*key).first << " " << (*key).second << "\n";
    }
}

int main() {
    pht();
    int q;
    cin >> q;
    map <string, int> cl;
    while(q--) {
        int marks, t;
        string name;
        cin >> t;
        if (t == 1) {
            cin >> name >> marks;
            auto it = cl.find(name);
            if (it != cl.end()) {
                marks += (*it).second;
                cl[name] = marks;
                // cl.insert({name, marks});
            } else {
                cl.insert({name, marks});
            }
        } else if (t == 2) {
            cin  >> name;
            cl.erase(name);
        } else {
            cin >> name;
            auto it = cl.find(name);
            if (it != cl.end()) {
                cout << (*it).second << "\n";
            } else {
                cout << 0 << "\n";
            }
            // cout << cl[name] << "\n";
        }

    }
    return 0;
}
