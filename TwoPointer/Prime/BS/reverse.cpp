#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int t_case;
    cin >> t_case;
    while(t_case--) {
        int n;
        cin >> n;
        vector <int> arr;
        for(int  i = 0; i < n; i++) {
            int x; cin >> x;
            arr.push_back(x);
        }
        auto Max = max_element(arr.begin(), arr.end());
        reverse(arr.begin(), Max + 1);
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}