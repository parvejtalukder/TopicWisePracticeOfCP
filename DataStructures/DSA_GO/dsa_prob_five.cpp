#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool cmp(const pair<int,int> &p1, const pair<int,int> &p2) {
    if (p1.first != p2.first) return p1.first < p2.first; 
    return p1.second > p2.second; 
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int,int>> m(n);
        for(int i = 0; i < n; i++) {
            cin >> m[i].first >> m[i].second;
        }

        sort(m.begin(), m.end(), cmp); 

        for(int i = 0; i < n; i++) {
            cout << m[i].first << " " << m[i].second << "\n";
        }
    }
    return 0;
}
