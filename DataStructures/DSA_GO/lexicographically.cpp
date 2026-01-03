#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool compire(vector <int> a, vector <int> b) {
    int sA = a.size(), sB = b.size();
    for(int i = 0; i < min(sA, sB); i++) {
        if (a[i] < b[i]) {
            return true;
        } else if (a[i] > b[i]) {
            return false;
        }
    }
    return a < b; 
}


int main() {
    pht();
    vector <int> one = {1, 2, 3};
    vector <int> two = {1, 3, 3};
    cout << boolalpha << (one == two) << "\n";
    cout << boolalpha << (one > two) << "\n";
    cout << boolalpha << (one < two) << "\n";
    cout << boolalpha << compire(one, two) << "\n";
    return 0;
}