#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

// void update(int *a) {
//     for(int i = 0; i < 5; i++) {
//         a[i]++;
//     }
// }

void update(int a[]) {
    for(int i = 0; i < 5; i++) {
        a[i]++;
    }
}

int main() {
    pht();
    int arr[] = {1, 2, 3, 4, 5};
    update(arr);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}