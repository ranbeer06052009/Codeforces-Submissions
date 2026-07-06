#include <bits/stdc++.h>
 
using ll = long long;
 
using namespace std;
 
using pii = pair<ll, ll>;
 
bool dfsv(ll v, ll p, vector<vector<ll>> &g, vector<ll> &a, vector<bool> &doom) {
    ll cnt = (a[v] != 0);
    for (ll u : g[v]) {
        if (u != p) {
            cnt += dfsv(u, v, g, a, doom);
        }
    }
    if (cnt <= 1 && a[v] == 0) {
        doom[v] = 1;
    }
    return cnt > 0;
}
 
void dfssz(ll v, ll p, vector<vector<ll>> &g, vector<ll> &sz, vector<ll> &a, map<pii, ll> &det, ll sa) {
    sz[v] = a[v];
    for (ll u : g[v]) {
        if (u != p) {
            dfssz(u, v, g, sz, a, det, sa);
            sz[v] += sz[u];
        }
    }
    det[make_pair(v, p)] = sz[v];
    det[make_pair(p, v)] = sa - sz[v];
}
 
void solve() {
    ll n, p, q;
    cin >> n >> p >> q;
 
    ll as = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        as += a[i];
    }
    vector<vector<ll>> g(n);
    vector<ll> deg(n);
    for (ll i = 0; i < n - 1; i++) {
        ll x, y;
        cin >> x >> y;
        x--; y--;
        g[x].push_back(y);
        g[y].push_back(x);
        deg[x]++;
        deg[y]++;
    }
 
    if (as == 0) {
        cout << "0
";
    } else {
        ll root = 0;
        for (ll i = 0; i < n; i++) {
            if (a[i] > 0) root = i;
        }
        vector<bool> doom(n);
        dfsv(root, root, g, a, doom);
 
        map<pii, ll> det;
        vector<ll> sz(n);
        for (ll u : g[0]) {
            dfssz(u, 0, g, sz, a, det, as);
        }
 
        vector<ll> dvt(n, 1e17);
        for (ll v = 0; v < n; v++) {
            if (doom[v]) {
                dvt[v] = 0;
            }
            for (ll u : g[v]) {
                dvt[v] = min(dvt[v], det[make_pair(v, u)]);
            }
        }
 
        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            if (a[i] > 0) ans += q;
        }
 
        sort(dvt.begin(), dvt.end());
 
        for (ll dead = 1; dead < n; dead++) {
            ans = min(ans, (n - dead) * q + dvt[dead - 1] * p);
        }
 
        cout << ans << "
";
    }
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--) solve();
}