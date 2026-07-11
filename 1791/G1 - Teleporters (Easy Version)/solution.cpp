#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    ll c;
    cin >> n >> c;
    vector<ll> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
        cost[i] += (i + 1); 
    }
    sort(cost.begin(), cost.end());
 
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (c >= cost[i]) {
            c -= cost[i];
            ans++;
        } else {
            break; 
        }
    }
 
    cout << ans << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}