#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

class Age {
    public:
    int age = 60;
    void print() {
        cout << age << "\n";
    }
};

int main() {
    pht();
    Age my = Age();
    my.print();
    return 0;
}