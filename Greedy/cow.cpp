#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool getAns(int arr[], int distance, int cows, int dist) {
    int cow = 1;
    int last_pos = arr[0];
    for(int i = 1; i < dist; i++) {
        if ((arr[i] - last_pos) >= distance) {
            cow++;
            last_pos = arr[i];
            if (cow == cows) {
                return true;
            }
        }
    }
    return false;
}

void solveIt() {
    int dist, cows;
    cin >> dist >> cows;
    int arr[dist];
    for(int i = 0; i < dist; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + dist);
    int min_dist = 0; int ans = 0;
    int max_dist = arr[dist - 1] - arr[0];
    while(min_dist <= max_dist) {
        int distance = (min_dist + max_dist)/2;
        if (getAns(arr, distance, cows, dist)) {
            ans = distance;
            min_dist = distance + 1;
        } else {
            max_dist = distance - 1;
        }
    }
    cout << ans << "\n";
}

int main() {
    pht();
    int n;
    cin >> n;
    while(n--) {
        solveIt();
    }
    return 0;
}