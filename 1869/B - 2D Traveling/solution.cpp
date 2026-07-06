#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, k, s, t;
    cin >> n >> k >> s >> t;
 
    vector<long long> x(n + 1), y(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }
 
    long long ans = abs(x[s] - x[t]) + abs(y[s] - y[t]);
    long long ms = 1e18, mt = 1e18;
 
    for (int i = 1; i <= k; i++) {
        ms = min(ms, abs(x[s] - x[i]) + abs(y[s] - y[i]));
        mt = min(mt, abs(x[t] - x[i]) + abs(y[t] - y[i]));
    }
 
    ans = min(ans, ms + mt);
    cout << ans << "
";
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