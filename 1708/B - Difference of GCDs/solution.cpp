#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    ll l, r;
    cin >> n >> l >> r;
    
    vector<ll> a(n);
    
    for (int i = 1; i <= n; i++) {
        ll x = ((l + i - 1) / i) * i;
        
        if (x > r) {
            cout << "NO
";
            return;
        }
        a[i - 1] = x;
    }
 
    cout << "YES
";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "
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