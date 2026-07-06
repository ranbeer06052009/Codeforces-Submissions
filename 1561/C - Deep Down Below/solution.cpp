#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        ll max_req = 0;
        
        for (int j = 0; j < m; j++) {
            ll x;
            cin >> x;
            max_req = max(max_req, x - j + 1);
        }
        a[i] = {max_req, m};
    }
    
    sort(a.begin(), a.end());
    
    ll ans = a[0].first;
    ll increase = a[0].second;
    
    for (int i = 1; i < n; i++) {
        ans = max(ans, a[i].first - increase);
        increase += a[i].second;
    }
    
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}