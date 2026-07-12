#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
const ll MOD = 1e9 + 7;
 
void solve() {
    ll n;
    cin >> n;
    ll ans = n % MOD;
    ans = (ans * ((n + 1) % MOD)) % MOD;
    ans = (ans * ((4LL * n - 1) % MOD)) % MOD;
    ans = (ans * 337) % MOD;
 
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