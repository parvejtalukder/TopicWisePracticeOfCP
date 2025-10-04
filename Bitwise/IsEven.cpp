#include <bits/stdc++.h>
using namespace std;

void isEven(int n);


int main() {
    int n; 
    cin >> n;
    isEven(n);
    return 0;
}

void isEven(int n) {
    if ((n >> 0) & 1) {
        cout << "Odd" << endl;
    }
    cout << "Even" << endl;
}