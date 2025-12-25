#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
}

int main() {
    // char num[109];
    string num;
    cin >> num;
    int sizeNum = num.size();
    if (sizeNum == 1) {
        cout << num << endl;
        return 0;
    }
    vector <int> arr;
    for(int i = 0; i < sizeNum; i+=2) {
        arr.push_back(num[i] - '0');
    }
    int size = arr.size();
    sort(arr.begin(), arr.end());
    for(int i = 0; i < size; i++) {
        if (i != size - 1) {
            cout << arr[i] << "+";
        } else {
            cout << arr[i] << endl;
        }
    }
    return 0;
}