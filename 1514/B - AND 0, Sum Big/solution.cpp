#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
const ll MOD = 1e9 + 7;
 
ll pw(ll b, ll e) {
    ll r = 1;
    b %= MOD;
    while (e > 0) {
        if (e % 2 == 1) r = (r * b) % MOD;
        b = (b * b) % MOD;
        e /= 2;
    }
    return r;
}
 
void solve() {
    ll n, k;
    cin >> n >> k;
    cout << pw(n, k) << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}