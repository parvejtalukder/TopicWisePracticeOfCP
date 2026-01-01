#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
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
            int a, b;
            cin >> a >> b;
            m[i] = {a, b}; 
        }
        sort(m.begin(), m.end()); 
        for(int i = 0; i < n; i++) {
            cout << m[i].first << " ";  
        }
        cout << "\n"
    }
    return 0;
}
