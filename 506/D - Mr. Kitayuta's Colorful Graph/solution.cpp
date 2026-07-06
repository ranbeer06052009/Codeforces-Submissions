#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
 
using namespace std;
 
const int MAXN = 100005;
const int MAXM = 100005;
 
vector<pair<int, int>> edges_of_color[MAXM];
vector<int> vertex_comps[MAXN];
 
int parent_arr[MAXN];
int root_to_id[MAXN];
int global_comp_counter = 0;
 
int find_set(int v) {
    if (parent_arr[v] == v)
        return v;
    return parent_arr[v] = find_set(parent_arr[v]);
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent_arr[b] = a;
}
 
int get_inter(const vector<int>& a, const vector<int>& b) {
    int ans = 0;
    if (a.size() < b.size()) {
        for (int x : a) {
            if (binary_search(b.begin(), b.end(), x)) ans++;
        }
    } else {
        for (int x : b) {
            if (binary_search(a.begin(), a.end(), x)) ans++;
        }
    }
    return ans;
}
 
void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
 
    for (int i = 0; i < m; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        edges_of_color[c].push_back({u, v});
    }
    for (int c = 1; c <= m; c++) {
        if (edges_of_color[c].empty()) continue;
 
        vector<int> active_nodes;
        
        for (auto& edge : edges_of_color[c]) {
            int u = edge.first;
            int v = edge.second;
            if (parent_arr[u] == 0) {
                parent_arr[u] = u;
                active_nodes.push_back(u);
            }
            if (parent_arr[v] == 0) {
                parent_arr[v] = v;
                active_nodes.push_back(v);
            }
            union_sets(u, v);
        }
        for (int u : active_nodes) {
            int r = find_set(u);
            if (root_to_id[r] == 0) {
                root_to_id[r] = ++global_comp_counter;
            }
            vertex_comps[u].push_back(root_to_id[r]);
        }
        for (int u : active_nodes) {
            int r = find_set(u);
            root_to_id[r] = 0; 
        }
        for (int u : active_nodes) {
            parent_arr[u] = 0;
        }
    }
 
    for (int i = 1; i <= n; i++) {
        if (!vertex_comps[i].empty()) {
            sort(vertex_comps[i].begin(), vertex_comps[i].end());
            vertex_comps[i].erase(unique(vertex_comps[i].begin(), vertex_comps[i].end()), vertex_comps[i].end());
        }
    }
 
    int q;
    cin >> q;
    unordered_map<long long, int> cache;
    
    while (q--) {
        int u, v;
        cin >> u >> v;
        
        if (u > v) swap(u, v); 
        long long key = ((long long)u << 32) | v;
        
        if (cache.count(key)) {
            cout << cache[key] << "
";
        } else {
            int ans = get_inter(vertex_comps[u], vertex_comps[v]);
            cache[key] = ans;
            cout << ans << "
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