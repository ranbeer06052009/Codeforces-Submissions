#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
void solve() {
    ll n, q;
    cin >> n >> q;
 
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    vector<ll> x(q);
    for (int i = 0; i < q; i++) {
        cin >> x[i];
    }
 
    ll p = 31;
 
    for (int i = 0; i < q; i++) {
        if (x[i] >= p) continue;
 
        ll pw = 1LL << x[i]; 
 
        for (int j = 0; j < n; j++) {
            if (a[j] % pw == 0) {
                a[j] += (pw / 2);
            }
        }
 
        p = x[i];
    }
 
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "
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