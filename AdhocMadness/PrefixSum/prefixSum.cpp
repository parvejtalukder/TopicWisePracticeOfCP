#include <bits/stdc++.h>
using namespace std;

vector <int> arrInt;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void sumFrom(int l, int r, int caseNo) {
    if (l < 0 || r >= arrInt.size() || l > r) {
        cout << -1 << endl;
        return;
    }

    int sum = 0;
    for (int j = l; j <= r; j++) {
        sum += arrInt[j];
    }

    cout << "Case " << caseNo + 1 << " : " << sum << endl;
}

int main() {
    pht();
    
    int arrSize;
    int querSize;
    cin >> arrSize;
    cin >> querSize;
    arrInt.resize(arrSize);
    
    vector <int> left(querSize);
    vector <int> right(querSize);

    for(int i = 0; i < arrSize; i++) {
        cin >> arrInt[i];
    }

    for(int i = 0; i < querSize; i++) {
        cin >> left[i];
        cin >> right[i];
    }

    for(int i = 0; i < querSize; i++) {
        sumFrom(left[i], right[i], i);
    }

    return 0;
}