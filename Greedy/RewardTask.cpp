#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    vector <int> arr;
    long long ans  =  0;
    for(int i = 0; i < n; i++) {
        int du, de;
        cin >> du >> de;
        arr.push_back(du);
        ans += de;
    }
    sort(arr.begin(), arr.end());
    long long ft = 0;
    for(auto du: arr) {
        ft += du;
        ans -= ft;
    }
    cout << ans << "\n";
    return 0;
}