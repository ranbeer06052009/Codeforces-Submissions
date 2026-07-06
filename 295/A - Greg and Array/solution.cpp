#include <bits/stdc++.h>
 
using namespace std;
 
struct Op {
    int l, r;
    long long d;
};
 
void solve() {
    int n, m, k;
    if (!(cin >> n >> m >> k)) return;
 
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
 
    vector<Op> ops(m + 1);
    for (int i = 1; i <= m; ++i) {
        cin >> ops[i].l >> ops[i].r >> ops[i].d;
    }
 
    vector<long long> od(m + 2, 0);
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        od[x]++;
        od[y + 1]--;
    }
 
    vector<long long> oc(m + 1, 0);
    long long co = 0;
    for (int i = 1; i <= m; ++i) {
        co += od[i];
        oc[i] = co;
    }
 
    vector<long long> ad(n + 2, 0);
    for (int i = 1; i <= m; ++i) {
        long long t = oc[i];
        if (t > 0) {
            long long v = ops[i].d * t;
            ad[ops[i].l] += v;
            ad[ops[i].r + 1] -= v;
        }
    }
 
    long long ca = 0;
    for (int i = 1; i <= n; ++i) {
        ca += ad[i];
        cout << a[i] + ca << " ";
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}