#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    pht();
    queue <int> q;
    q.push(5);
    q.push(51);
    q.push(52);
    q.push(34);
    cout << q.front() << "\n";
    return 0;
}
