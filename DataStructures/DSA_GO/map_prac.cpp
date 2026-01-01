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
    map <int, string> cl;
    cl.insert({1, "Parvej"});
    cl.insert({2, "Emran"});
    cl.insert({3, "Reduan"});
    cl.insert({4, "Nani"});
    cl.insert({5, "Mamun"});
    cl[6] = "Unknown";
    print(cl);
    return 0;
}
