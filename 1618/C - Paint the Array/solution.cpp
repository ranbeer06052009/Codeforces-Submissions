#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    ll gcd1 = 0, gcd2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            gcd1 = std::gcd(gcd1, v[i]);
        } else {
            gcd2 = std::gcd(gcd2, v[i]);
        }
    }
 
    bool ok1 = true;
    for (int i = 1; i < n; i += 2) {
        if (v[i] % gcd1 == 0) {
            ok1 = false;
            break;
        }
    }
    
    if (ok1) {
        cout << gcd1 << "
";
        return;
    }
 
    bool ok2 = true;
    for (int i = 0; i < n; i += 2) {
        if (v[i] % gcd2 == 0) {
            ok2 = false;
            break;
        }
    }
    
    if (ok2) {
        cout << gcd2 << "
";
    } else {
        cout << 0 << "
";
    }
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