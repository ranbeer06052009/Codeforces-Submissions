#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    sort(b.begin(), b.end());
    
    ll s = 0;
    int l = 0;
    
    for (int i = 0; i < m; i++) {
        ll bs = 0;
        for (int j = l; j < b[i]; j++) {
            bs += a[j];
        }
        s += abs(bs);
        l = b[i];
    }
    
    for (int i = l; i < n; i++) {
        s += a[i];
    }
    
    cout << s;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
            cout<<"
" ;
        }
    }
    return 0;
}