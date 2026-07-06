#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int a, b, k;
    cin >> a >> b >> k;
 
    vector<int> deg_a(a + 1, 0);
    vector<int> deg_b(b + 1, 0);
 
    for (int i = 0; i < k; i++) {
        int u;
        cin >> u;
        deg_a[u]++;
    }
 
    for (int i = 0; i < k; i++) {
        int v;
        cin >> v;
        deg_b[v]++;
    }
 
    ll ans = 1LL * k * (k - 1) / 2;
 
    for (int x : deg_a) {
        ans -= 1LL * x * (x - 1) / 2;
    }
 
    for (int x : deg_b) {
        ans -= 1LL * x * (x - 1) / 2;
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