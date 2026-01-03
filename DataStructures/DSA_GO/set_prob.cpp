#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

set<int> arr;

int main() {
    pht();
    set <int> arr;
    arr.insert(5);
    arr.insert(5);
    arr.insert(5);
    arr.insert(5);
    arr.insert(5);
    cout << *(arr.begin()) << "\n";
    // int q;
    // cin >> q;
    // while (q--) {
    //     int t, qt;
    //     cin >> t >> qt;

    //     if (t == 1) {
    //         arr.insert(qt);
    //     }
    //     else if (t == 2) {
    //         arr.erase(qt);   
    //     }
    //     else {
    //         if (arr.find(qt) != arr.end()) {
    //             cout << "Yes\n";
    //         } else {
    //             cout << "No\n";
    //         }
    //     }
    // }
    return 0;
}
