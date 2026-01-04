#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    int n;
    cin >> n;
    int arr[n  + 1];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    set <int> st;
    for(int i = 1; i <= n; i++) {
        st.insert(arr[i]);
        cout << st.size() << "\n";
    }
    return 0;
}