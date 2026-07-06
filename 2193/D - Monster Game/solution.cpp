#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    // Sort sword strengths
    sort(a.begin(), a.end());
 
    // Prefix sum of b
    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + b[i - 1];
    }
 
    int ans = 0;
 
    // Iterate over all possible difficulties
    for (int i = 0; i < n; i++) {
        int x = a[i];
 
        // Number of swords with strength >= x
        int k = n - i;
 
        // Binary search max j such that pref[j] <= k
        int j = upper_bound(pref.begin(), pref.end(), k) - pref.begin() - 1;
 
        ans = max(ans, x * j);
    }
 
    cout << ans << '
';
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
}