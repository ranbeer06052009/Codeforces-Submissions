#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 100005;
const int M = 12;
 
int n, m, q;
char g[N][M];
 
struct Node {
    int l, r;
    pair<int, int> out[M];
} tr[4 * N];
 
Node merge(const Node& top, const Node& bot) {
    Node res;
    res.l = top.l;
    res.r = bot.r;
    for (int y = 1; y <= m; ++y) {
        pair<int, int> bo = bot.out[y];
        if (bo.first == top.r) {
            res.out[y] = top.out[bo.second];
        } else {
            res.out[y] = bo;
        }
    }
    return res;
}
 
void bld(int u, int l, int r) {
    if (l == r) {
        tr[u].l = l;
        tr[u].r = r;
        for (int y = 1; y <= m; ++y) {
            int cy = y;
            bool vis[M] = {false};
            while (true) {
                if (cy < 1) { tr[u].out[y] = {l, 0}; break; }
                if (cy > m) { tr[u].out[y] = {l, m + 1}; break; }
                if (vis[cy]) { tr[u].out[y] = {-1, -1}; break; }
                vis[cy] = true;
                char c = g[l][cy];
                if (c == '^') { tr[u].out[y] = {l - 1, cy}; break; }
                else if (c == '<') cy--;
                else if (c == '>') cy++;
            }
        }
        return;
    }
    int mid = l + (r - l) / 2;
    bld(2 * u, l, mid);
    bld(2 * u + 1, mid + 1, r);
    tr[u] = merge(tr[2 * u], tr[2 * u + 1]);
}
 
void upd(int u, int l, int r, int row, int col, char c) {
    if (l == r) {
        g[l][col] = c;
        for (int y = 1; y <= m; ++y) {
            int cy = y;
            bool vis[M] = {false};
            while (true) {
                if (cy < 1) { tr[u].out[y] = {l, 0}; break; }
                if (cy > m) { tr[u].out[y] = {l, m + 1}; break; }
                if (vis[cy]) { tr[u].out[y] = {-1, -1}; break; }
                vis[cy] = true;
                char ch = g[l][cy];
                if (ch == '^') { tr[u].out[y] = {l - 1, cy}; break; }
                else if (ch == '<') cy--;
                else if (ch == '>') cy++;
            }
        }
        return;
    }
    int mid = l + (r - l) / 2;
    if (row <= mid) upd(2 * u, l, mid, row, col, c);
    else upd(2 * u + 1, mid + 1, r, row, col, c);
    tr[u] = merge(tr[2 * u], tr[2 * u + 1]);
}
 
Node qry(int u, int l, int r, int ql, int qr) {
    if (ql <= l && r <= qr) return tr[u];
    int mid = l + (r - l) / 2;
    if (qr <= mid) return qry(2 * u, l, mid, ql, qr);
    if (ql > mid) return qry(2 * u + 1, mid + 1, r, ql, qr);
    return merge(qry(2 * u, l, mid, ql, qr), qry(2 * u + 1, mid + 1, r, ql, qr));
}
 
void solve() {
    cin>>n>>m>>q;
    
    for (int i = 1; i <= n; ++i) {
        string s;
        cin >> s;
        for (int j = 1; j <= m; ++j) {
            g[i][j] = s[j - 1];
        }
    }
    
    bld(1, 1, n);
    
    for (int i = 0; i < q; ++i) {
        char t;
        cin >> t;
        if (t == 'A') {
            int x, y;
            cin >> x >> y;
            Node res = qry(1, 1, n, 1, x);
            cout << res.out[y].first << " " << res.out[y].second << "
";
        } else if (t == 'C') {
            int x, y;
            char c;
            cin >> x >> y >> c;
            upd(1, 1, n, x, y, c);
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}