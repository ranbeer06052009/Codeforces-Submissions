#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    
    vector<ll> v(n);
    ll ts = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        ts += v[i];
    }
 
    ll a = 0;
    ll s = 0;
    
    for (int i = 0; i < n - 1; i++) {
        s += v[i];
        a = max(a, gcd(ts - s, s));
    }
 
    cout << a << "
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