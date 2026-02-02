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
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
                // swap(arr[j], arr[j + 1]);
            }  
        }
        swap(arr[i], arr[min]);
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}