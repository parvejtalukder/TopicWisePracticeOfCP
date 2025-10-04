#include <bits/stdc++.h>
using namespace std;

int main() {
    string jihan = "Tazim Husen Talukder";
    string raisa = "Raisa"; int i = 1;
    for(char ch = 'A'; ch >= 'A' && ch <= 'Z'; ch++) {
        cout << ch << " ";
        if (i == 5) {
            i = 0;
            cout << endl;
        }
        i++;
    }
    return 0;
}