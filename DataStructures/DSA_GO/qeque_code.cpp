#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    pht();
    deque <int> q;
    q.push_front(5);
    q.push_front(3);
    q.push_front(4);
    for(auto it: q) {
        cout << it << "\n";
    }
    return 0;
}
