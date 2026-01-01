#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    pht();
    // priority_queue<int> pq;
    priority_queue<int, vector <int>, greater <int>> pq; // to get the small one
    pq.push(3);
    pq.push(6);
    pq.push(61);
    cout << pq.top() << "\n";
    return 0;
}
