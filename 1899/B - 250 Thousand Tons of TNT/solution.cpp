#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &it : v) cin >> it;
 
    vector<ll> p(n);
    p[0] = v[0];
    for (int i = 1; i < n; i++) {
        p[i] = v[i] + p[i - 1];
    }
 
    ll ans = 0;
    for (int k = 1; k <= n; k++) {
        if (n % k != 0) continue;
        
        ll mx = -1e18, mn = 1e18;
        for (int i = k - 1; i < n; i += k) {
            ll cur = p[i] - (i < k ? 0 : p[i - k]);
            mx = max(mx, cur);
            mn = min(mn, cur);
        }
        ans = max(ans, mx - mn);
    }
    cout << ans << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}