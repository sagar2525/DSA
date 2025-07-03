// #include <bits/stdc++.h>
// using namespace std;

// bool possible(vector<int> &arr, int m, int n, long long mid) {
//     long long length = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > mid) {
//             length += (arr[i] - mid);
//         }
//         if (length >= m) { // Exit early if sufficient wood is collected
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     vector<int> arr = {100, 120, 90, 95, 105, 110, 115, 140, 150, 130};
//     long long m; 
//     cin >> m;

//     long long s = 0;
//     long long e = *max_element(arr.begin(), arr.end());
//     int n = arr.size();
//     long long ans = 0;

//     while (s <= e) {
//         long long mid = s + (e - s) / 2;
//         if (possible(arr, m, n, mid)) {
//             ans = mid;
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, long long m, int n, long long mid) {
    long long length = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            length += (arr[i] - mid);
        }
    }
    return length >= m;
}

int main() {
    vector<int> arr = {20,15,10,17};
    long long m; 
    cin >> m;

    long long s = 0;
    long long e = *max_element(arr.begin(), arr.end());
    int n = arr.size();
    long long ans = 0;

    while (s <= e) {
        long long mid = s + (e - s) / 2;
        if (possible(arr, m, n, mid)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
