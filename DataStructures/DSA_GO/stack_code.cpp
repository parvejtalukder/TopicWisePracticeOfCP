#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    pht();
    // last in first out
    stack <int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    // st.pop();
    while(!st.empty()) {
        cout << st.top() << "\n";
        st.pop();
    }
    return 0;
}
