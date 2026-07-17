#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<ll> ov, ev;
    ll ts = 0;
    
    for (int i = 1; i <= n; i++) {
        ll a;
        cin >> a;
        ts += a;
        if (i % 2 != 0) {
            ov.push_back(a);
        } else {
            ev.push_back(a);
        }
    }
    
    int oc = 0, ec = 0;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (x % 2 != 0) {
            oc++;
        } else {
            ec++;
        }
    }
    
    sort(ov.rbegin(), ov.rend());
    sort(ev.rbegin(), ev.rend());
    
    ll ms = 0;
    
    if (oc > 0 && !ov.empty()) {
        ms += ov[0];
        int l = min((int)ov.size(), oc);
        for (int i = 1; i < l; i++) {
            if (ov[i] > 0) ms += ov[i];
            else break;
        }
    }
    
    if (ec > 0 && !ev.empty()) {
        ms += ev[0];
        int l = min((int)ev.size(), ec);
        for (int i = 1; i < l; i++) {
            if (ev[i] > 0) ms += ev[i];
            else break;
        }
    }
    
    cout << ts - ms << "
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