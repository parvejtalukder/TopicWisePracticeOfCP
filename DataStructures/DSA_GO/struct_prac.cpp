#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

struct Person {
    string name;
    int age;
    string address;

    Person() {
        name = " ";
        age = 0;
        address = " ";
    }

    Person(string n, int a, string ad) {
        name = n;
        age = a;
        address = ad;
    }

    void print() {
        cout << "Name    : " << name << "\n";
        cout << "Age     : " << age << "\n";
        cout << "Address : " << address << "\n";
    }

};

int main() {
    pht();
    Person p("Parvej", 20, "SYL, BD");
    p.print();
    return 0;
}