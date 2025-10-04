#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return f(n - 1) + f(n - 2); 
}

int main() {
    for(int i = 2; i <= 10; i++) {
        cout << f(i) << endl;
    }
    return 0;
}