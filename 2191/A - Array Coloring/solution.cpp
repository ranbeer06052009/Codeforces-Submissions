#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++) {
            pos[a[i]] = i;
        }
 
        vector<vector<int>> g(n);
 
        for (int i = 0; i + 1 < n; i++) {
            g[i].push_back(i + 1);
            g[i + 1].push_back(i);
        }
 
        for (int v = 1; v < n; v++) {
            int u = pos[v];
            int w = pos[v + 1];
            g[u].push_back(w);
            g[w].push_back(u);
        }
 
        vector<int> color(n, -1);
        bool ok = true;
 
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                queue<int> q;
                q.push(i);
                color[i] = 0;
 
                while (!q.empty()) {
                    int u = q.front(); q.pop();
                    for (int v : g[u]) {
                        if (color[v] == -1) {
                            color[v] = color[u] ^ 1;
                            q.push(v);
                        } else if (color[v] == color[u]) {
                            ok = false;
                            break;
                        }
                    }
                    if (!ok) break;
                }
            }
            if (!ok) break;
        }
 
        cout << (ok ? "YES
" : "NO
");
    }
    return 0;
}