#include <bits/stdc++.h>
using namespace std;

int n;
// cin >> n;
vector <int> arr;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

vector <int> merge(vector <int> l, vector <int> r) {
    vector <int> ans;
    int i = 0, j = 0;
    while(i < l.size() && j < r.size()) {
        if (l[i] < r[j]) {
            ans.push_back(l[i]);
            i++;
        } else {
            ans.push_back(r[j]);
            j++;
        }
    }
    while(i < l.size()) {
        ans.push_back(l[i]);
        i++;
    }
    while(j < r.size()) {
        ans.push_back(r[j]);
        j++;
    }
    return ans;
}

int main() {
    pht();
    cin >> n;
    arr.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector <int> l(arr.begin(), arr.begin() + (n/2));
    vector <int> r(arr.begin() + (n/2), arr.end());
    vector <int> ans = merge(l, r);
    for(auto it: ans) cout << it << " ";
    cout << "\n";
    return 0;
}