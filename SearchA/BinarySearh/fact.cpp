#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string fact = "1";
        for (int i = 2; i <= n; i++) {
            int carry = 0;
            string result = "";
            for (int j = fact.length() - 1; j >= 0; j--) {
                int mul = (fact[j] - '0') * i + carry;
                result = char(mul % 10 + '0') + result;
                carry = mul / 10;
            }
            while (carry > 0) {
                result = char(carry % 10 + '0') + result;
                carry /= 10;
            }
            fact = result;  
        }
        cout << fact << endl;
    }
    return 0;
}
