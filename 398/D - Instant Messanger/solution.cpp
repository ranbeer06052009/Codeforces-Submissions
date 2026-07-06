#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
 
using namespace std;
using namespace __gnu_pbds; 
 
struct chash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
const int N = 50005;
const int S = 350;
 
bool on[N], hv[N];
int ans[N];
 
gp_hash_table<int, null_type, chash> adj[N]; 
vector<int> hadj[N];
 
void prom(int u) {
    hv[u] = true;
    ans[u] = 0;
    for (int v : adj[u]) {
        hadj[v].push_back(u);
        if (on[v]) ans[u]++;
    }
}
 
void add_e(int u, int v) {
    adj[u].insert(v);
    adj[v].insert(u);
    
    if (hv[u]) {
        hadj[v].push_back(u);
        if (on[v]) ans[u]++;
    }
    if (hv[v]) {
        hadj[u].push_back(v);
        if (on[u]) ans[v]++;
    }
    
    if (!hv[u] && adj[u].size() >= S) prom(u);
    if (!hv[v] && adj[v].size() >= S) prom(v);
}
 
void rem_h(int u, int h) {
    for (int i = 0; i < hadj[u].size(); i++) {
        if (hadj[u][i] == h) {
            hadj[u][i] = hadj[u].back();
            hadj[u].pop_back();
            break;
        }
    }
}
 
void del_e(int u, int v) {
    if (hv[u]) {
        rem_h(v, u);
        if (on[v]) ans[u]--;
    }
    if (hv[v]) {
        rem_h(u, v);
        if (on[u]) ans[v]--;
    }
    adj[u].erase(v);
    adj[v].erase(u);
}
 
void solve() {
    int n, m, q;
    cin>> n>> m>> q;
 
    int o;
    cin >> o;
    for (int i = 0; i < o; i++) {
        int u;
        cin >> u;
        on[u] = true;
    }
 
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        add_e(u, v);
    }
 
    while (q--) {
        char t;
        cin >> t;
        
        if (t == 'O') {
            int u; cin >> u;
            on[u] = true;
            for (int h : hadj[u]) ans[h]++;
        } else if (t == 'F') {
            int u; cin >> u;
            on[u] = false;
            for (int h : hadj[u]) ans[h]--;
        } else if (t == 'A') {
            int u, v; cin >> u >> v;
            add_e(u, v);
        } else if (t == 'D') {
            int u, v; cin >> u >> v;
            del_e(u, v);
        } else if (t == 'C') {
            int u; cin >> u;
            if (hv[u]) {
                cout << ans[u] << "
";
            } else {
                int cnt = 0;
                for (int v : adj[u]) {
                    if (on[v]) cnt++;
                }
                cout << cnt << "
";
            }
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}