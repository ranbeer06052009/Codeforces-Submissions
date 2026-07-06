#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 100005;
 
int n, m;
int col[MAXN];
vector<int> adj[MAXN];
vector<pair<int, int>> queries[MAXN];
 
int sz[MAXN], big[MAXN];
int cnt[MAXN], at_least[MAXN];
int ans[MAXN];
bool is_big[MAXN];
void dfs_sz(int u, int p) {
    sz[u] = 1;
    big[u] = 0;
    int max_sz = 0;
    for (int v : adj[u]) {
        if (v != p) {
            dfs_sz(v, u);
            sz[u] += sz[v];
            if (sz[v] > max_sz) {
                max_sz = sz[v];
                big[u] = v;
            }
        }
    }
}
void add(int u, int p, int x) {
    if (x == 1) {
        cnt[col[u]]++;
        at_least[cnt[col[u]]]++;
    } else {
        at_least[cnt[col[u]]]--;
        cnt[col[u]]--;
    }
    for (int v : adj[u]) {
        if (v != p && !is_big[v]) {
            add(v, u, x);
        }
    }
}
void dfs_solve(int u, int p, bool keep) {
    for (int v : adj[u]) {
        if (v != p && v != big[u]) {
            dfs_solve(v, u, false);
        }
    }
    if (big[u]) {
        dfs_solve(big[u], u, true);
        is_big[big[u]] = true; 
    }
    add(u, p, 1);
 
    for (auto& q : queries[u]) {
        int k = q.first;
        int idx = q.second;
        if (k <= n) {
            ans[idx] = at_least[k];
        } else {
            ans[idx] = 0; 
        }
    }
 
    if (big[u]) {
        is_big[big[u]] = false; 
    }
    if (!keep) {
        add(u, p, -1);
    }
}
void solve() {
    cin >> n >> m;
 
    for (int i = 1; i <= n; i++) {
        cin >> col[i];
    }
 
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    for (int i = 0; i < m; i++) {
        int v, k;
        cin >> v >> k;
        queries[v].push_back({k, i});
    }
 
    dfs_sz(1, 0);
    dfs_solve(1, 0, true);
 
    for (int i = 0; i < m; i++) {
        cout << ans[i] << "
";
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
        //cout << '
';
    }
}