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
    vector<int> p(n+1,0);
    int maxi=0;
    for (int i = 1; i <=n; i++) {
        cin >> p[i] ;
        maxi=max(maxi,p[i]);
    }
    int ans=0;
    for (int i = 1; i <=n; i++) {
        if(maxi==p[i]) ans++;
    }
    cout<<ans;
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