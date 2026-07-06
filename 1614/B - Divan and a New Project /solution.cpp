#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    
    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
 
    sort(a.rbegin(), a.rend());
 
    vector<ll> ans(n + 1, 0);
    ll minutes = 0;
    
    for (int i = 0; i < n; i++) {
        ll d = (i / 2) + 1;
        ll coord = (i % 2 == 0) ? d : -d;
        
        ans[a[i].second] = coord;
        minutes += 2LL * d * a[i].first;
    }
 
    cout << minutes << "
";
    for (int i = 0; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << "
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