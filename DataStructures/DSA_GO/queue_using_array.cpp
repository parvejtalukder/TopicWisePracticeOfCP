#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int N = 1e3 + 9;
struct Queue {
    int arr[N];
    int start = 1, end = 0;
    void push(int x) {
        end++;
        arr[end] = x;
    }
    void pop() {
        if (start > end) {
            return;
        }
        start++;
    }
    int front() {
        if (start > end) {
            cout << "EMPTY();" << "\n";
            return -1;
        } 
        return arr[start];
    }
    int back() {
        return arr[end];
    }
    int size() {
        return end - start + 1;
    }
    bool empty() {
        return start > end;
    }

};

int main() {
    pht();
    Queue q;
    q.push(5);
    q.push(7);
    q.push(44);
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";
    return 0;
}