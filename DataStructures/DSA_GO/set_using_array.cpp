#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

struct Set {
    vector <int> st;
    void insert(int x) {
        if(!binary_search(st.begin(), st.end(), x)) {
            st.push_back(x);
            sort(st.begin(), st.end());
        }
    }
    int begin() {
        return *(st.begin());
    }
    int end() {
        return *(st.end());
    }
    auto find(int x) {
        auto it = std::find(st.begin(), st.end(), x);
        return it;     
    }
    int size() {
        return st.size();
    }
    void clear() {
        st.clear();
    }
    int count(int x) {
        int cnt = 0;
        for(auto it: st) {
            if (x == it) cnt++;
        }
        return cnt;
    }
    void erase(auto indx) {
        st.erase(indx);
    }
    bool empty() {
        return st.empty();
    }
};

int main() {
    pht();
    Set st;
    st.insert(5);
    st.insert(8);
    st.insert(10);
    cout << *st.find(5) << "\n";
    cout << st.end() << "\n";
    cout << st.begin() << "\n";
    cout << st.size() << "\n";
    // cout << st.erase(st.begin() + 2) << "\n";
    return 0;
}