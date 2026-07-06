#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 676767677;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
 
    int l = 0, r = n - 1;
    long long x = 0;
    long long ans = 0;
    while (l < r) {
        long long needed = a[r] - x; 
        if (a[l] <= needed) {
            x += a[l];
            ans += a[l];
            a[l] = 0;
            l++;
            if (x == a[r]) {
                ans++; 
                x = 0;
                a[r] = 0;
                r--;
            }
        } else {
            a[l] -= needed;
            x += needed;
            ans += needed;
            ans++;
            x = 0;
            a[r] = 0;
            r--;
        }
    }
    if (l == r && a[l] > 0) {
        long long rem = a[l];
        long long k = (rem - x) / 2;
        long long cost1 = rem;
        long long cost2 = rem - x - k + 1;    
        ans += min(cost1, cost2);
    }
    cout << ans;
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