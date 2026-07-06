#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 100005;
const int LOG = 18;
const int INF = 1e9;
 
vector<int> g[N];
int up[N][LOG], dep[N];
int sz[N], cpar[N], best[N];
bool vis[N];
 
void dfs(int u, int p, int d) {
    dep[u] = d;
    up[u][0] = p;
    for (int i = 1; i < LOG; i++) {
        up[u][i] = up[up[u][i - 1]][i - 1];
    }
    for (int v : g[u]) {
        if (v != p) dfs(v, u, d + 1);
    }
}
 
int lca(int u, int v) {
    if (dep[u] < dep[v]) swap(u, v);
    int diff = dep[u] - dep[v];
    for (int i = 0; i < LOG; i++) {
        if ((diff >> i) & 1) u = up[u][i];
    }
    if (u == v) return u;
    for (int i = LOG - 1; i >= 0; i--) {
        if (up[u][i] != up[v][i]) {
            u = up[u][i];
            v = up[v][i];
        }
    }
    return up[u][0];
}
 
int dist(int u, int v) {
    return dep[u] + dep[v] - 2 * dep[lca(u, v)];
}
 
int get_sz(int u, int p) {
    sz[u] = 1;
    for (int v : g[u]) {
        if (v != p && !vis[v]) sz[u] += get_sz(v, u);
    }
    return sz[u];
}
 
int get_c(int u, int p, int tot) {
    for (int v : g[u]) {
        if (v != p && !vis[v] && sz[v] > tot / 2) {
            return get_c(v, u, tot);
        }
    }
    return u;
}
 
void build(int u, int p) {
    int tot = get_sz(u, 0);
    int c = get_c(u, 0, tot);
    cpar[c] = p;
    vis[c] = true;
    for (int v : g[c]) {
        if (!vis[v]) build(v, c);
    }
}
 
void upd(int u) {
    for (int curr = u; curr != 0; curr = cpar[curr]) {
        best[curr] = min(best[curr], dist(u, curr));
    }
}
 
int qry(int u) {
    int ans = INF;
    for (int curr = u; curr != 0; curr = cpar[curr]) {
        ans = min(ans, best[curr] + dist(u, curr));
    }
    return ans;
}
 
void solve() {
    int n, m;
    cin>> n>> m;
 
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
 
    dfs(1, 1, 0);
    build(1, 0);
 
    fill(best, best + n + 1, INF);
    upd(1);
 
    while (m--) {
        int t, v;
        cin >> t >> v;
        if (t == 1) {
            upd(v);
        } else {
            cout << qry(v) << "
";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}