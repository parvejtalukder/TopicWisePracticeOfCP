#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    priority_queue <int> pq;
    for(int i = 1; i <= n; i++) {
        pq.push(arr[i]);
        if (pq.size() > k) {
            pq.pop();
        }
        if (i >= k) {
            cout << pq.top() << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}