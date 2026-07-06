#include <bits/stdc++.h>
using namespace std;
#define int long long
// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
 
void solve() {
    int n;
    cin >> n ;
    vector<int> arr(n,0);
    int k=n;
    for (int i = n-2; i >= 0; i=i-2) {
        arr[i]=k;
        k--;
    }
    int j=1;
    for (int i = n-1; i >= 0; i=i-2) {
        arr[i]=j;
        j++;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}