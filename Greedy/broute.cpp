#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n;
    cin >> n;
    int start[n];
    int end[n];
    for(int i = 0; i < n; i++) {
        cin >> start[i] >> end[i];
    }
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }
    sort(arr, arr + n, [&](int a, int b){
        return end[a] < end[b];
    });
    int count = 0;
    int max_end = -1;
    for(int i = 0; i < n; i++) {
        int indx = arr[i];
        if (start[indx] >= max_end) {
            max_end = end[indx];
            count++;
        }
        // cout << start[i] << " " << end[i] << "\n";
    }
    cout << count << "\n";
    return 0;
}