#include <bits/stdc++.h>
 
using namespace std;
 
const int B = 320;
 
void solve() {
    int n, m, q;
    if (!(cin >> n >> m >> q)) return;
 
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    vector<vector<int>> s(m + 1);
    vector<int> id(m + 1, -1);
    vector<int> hv;
 
    for (int i = 1; i <= m; i++) {
        int k;
        cin >> k;
        s[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> s[i][j];
        }
        
        if (k > B) {
            id[i] = hv.size();
            hv.push_back(i);
        }
    }
 
    int hc = hv.size();
    
    vector<vector<int>> in(m + 1, vector<int>(hc, 0));
    vector<long long> hs(hc, 0);
    vector<long long> ha(hc, 0);
    vector<bool> vis(n + 1, false);
 
    for (int i = 0; i < hc; i++) {
        int u = hv[i];
        for (int x : s[u]) {
            vis[x] = true;
            hs[i] += a[x];
        }
 
        for (int k = 1; k <= m; k++) {
            int cnt = 0;
            for (int x : s[k]) {
                if (vis[x]) cnt++;
            }
            in[k][i] = cnt;
        }
 
        for (int x : s[u]) {
            vis[x] = false;
        }
    }
 
    while (q--) {
        char type;
        cin >> type;
        
        if (type == '?') {
            int k;
            cin >> k;
            long long ans = 0;
 
            if (id[k] != -1) {
                ans = hs[id[k]];
            } else {
                for (int x : s[k]) {
                    ans += a[x];
                }
            }
 
            for (int j = 0; j < hc; j++) {
                ans += ha[j] * in[k][j];
            }
 
            cout << ans << "
";
            
        } else if (type == '+') {
            int k;
            long long x;
            cin >> k >> x;
 
            if (id[k] != -1) {
                ha[id[k]] += x;
            } else {
                for (int el : s[k]) {
                    a[el] += x;
                }
                for (int j = 0; j < hc; j++) {
                    hs[j] += x * in[k][j];
                }
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