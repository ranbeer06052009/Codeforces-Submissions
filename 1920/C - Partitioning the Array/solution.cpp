#include <bits/stdc++.h>
using namespace std;
 
vector<int> divisors(int n) {
    vector<int> div;
    for (int i = 1; i * i <= n; i++) {
        if (n % i) continue;
        div.push_back(i);
        if (n / i != i) div.push_back(n / i);
    }
    return div;
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
 
    auto div = divisors(n);
    int ans = 0;
    for (auto &k : div) {
        int m = 0;
        for (int i = k; i < n; i++) {
            m = __gcd(m, abs(a[i] - a[i - k]));
        }
        if (m != 1) ans++;
    }
 
    cout << ans;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}