#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

struct Stack {
    vector <int> v;
    void push(int x) {
        v.push_back(x);
    }
    int top() {
        if (v.empty()) return -1;
        else return v.back();
    }
    void pop() {
        if (v.empty()) return;
        else v.pop_back();
    }
};

int main() {
    pht();
    Stack st;
    st.push(30);
    st.push(20);
    st.push(10);
    // st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    // st = {1, 2, 3};
    return 0;
}