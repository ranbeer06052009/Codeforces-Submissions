#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 300005;
const long long MOD = 1000000009;
 
long long f[MAXN + 5];
long long a[MAXN];
 
struct Node {
    long long sum;
    long long lz1, lz2;
} tree[4 * MAXN];
void precompute() {
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i < MAXN + 5; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % MOD;
    }
}
void apply(int node, int L, int R, long long val1, long long val2) {
    int len = R - L + 1;
    long long add_sum = (val1 * f[len]) % MOD;
    add_sum = (add_sum + val2 * (f[len + 1] - 1 + MOD)) % MOD; // +MOD prevents negatives
    
    tree[node].sum = (tree[node].sum + add_sum) % MOD;
    tree[node].lz1 = (tree[node].lz1 + val1) % MOD;
    tree[node].lz2 = (tree[node].lz2 + val2) % MOD;
}
void push_down(int node, int L, int R) {
    if (tree[node].lz1 == 0 && tree[node].lz2 == 0) return;
    
    int mid = L + (R - L) / 2;
    int left_len = mid - L + 1;
    apply(2 * node, L, mid, tree[node].lz1, tree[node].lz2);
    long long r_val1 = (f[left_len - 1] * tree[node].lz1 + f[left_len] * tree[node].lz2) % MOD;
    long long r_val2 = (f[left_len] * tree[node].lz1 + f[left_len + 1] * tree[node].lz2) % MOD;
    apply(2 * node + 1, mid + 1, R, r_val1, r_val2);
    tree[node].lz1 = 0;
    tree[node].lz2 = 0;
}
void push_up(int node) {
    tree[node].sum = (tree[2 * node].sum + tree[2 * node + 1].sum) % MOD;
}
void build(int node, int L, int R) {
    tree[node].lz1 = tree[node].lz2 = 0;
    if (L == R) {
        tree[node].sum = a[L] % MOD;
        return;
    }
    int mid = L + (R - L) / 2;
    build(2 * node, L, mid);
    build(2 * node + 1, mid + 1, R);
    push_up(node);
}
void update(int node, int L, int R, int ql, int qr) {
    if (ql <= L && R <= qr) {
        long long val1 = f[L - ql + 1];
        long long val2 = f[L - ql + 2];
        apply(node, L, R, val1, val2);
        return;
    }
    
    push_down(node, L, R);
    int mid = L + (R - L) / 2;
    
    if (ql <= mid) update(2 * node, L, mid, ql, qr);
    if (qr > mid)  update(2 * node + 1, mid + 1, R, ql, qr);
    
    push_up(node);
}
long long query(int node, int L, int R, int ql, int qr) {
    if (ql <= L && R <= qr) {
        return tree[node].sum;
    }
    
    push_down(node, L, R);
    int mid = L + (R - L) / 2;
    long long res = 0;
    
    if (ql <= mid) res = (res + query(2 * node, L, mid, ql, qr)) % MOD;
    if (qr > mid)  res = (res + query(2 * node + 1, mid + 1, R, ql, qr)) % MOD;
    
    return res;
}
void solve(){
    precompute();
 
    int n, m;
    cin >> n >> m;
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    build(1, 1, n);
 
    for (int i = 0; i < m; i++) {
        int type, l, r;
        cin >> type >> l >> r;
        
        if (type == 1) {
            update(1, 1, n, l, r);
        } else {
            cout << query(1, 1, n, l, r) << "
";
        }
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