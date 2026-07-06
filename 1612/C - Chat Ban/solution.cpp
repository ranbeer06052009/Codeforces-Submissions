#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
ll get_sum(ll n) {
    return n * (n + 1) / 2;
}
 
void solve() {
    ll k, x;
    cin >> k >> x;
    
    ll lo = 1, hi = 2 * k - 1, ans = 2 * k - 1;
    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        ll emotes = (mid >= k) ? 
                    (get_sum(k) + get_sum(k - 1) - get_sum(2 * k - 1 - mid)) : 
                    get_sum(mid);
        
        if (emotes >= x) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}