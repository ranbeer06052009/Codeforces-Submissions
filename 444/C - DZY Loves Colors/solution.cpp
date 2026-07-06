#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 100005;
 
long long bit1[N], bit2[N];
int n, m;
 
void add(int idx, long long val) {
    long long val2 = (long long)idx * val;
    for (int i = idx; i <= n; i += (i & -i)) {
        bit1[i] += val;
        bit2[i] += val2;
    }
}
 
void add_range(int l, int r, long long val) {
    add(l, val);
    add(r + 1, -val);
}
 
long long qry(int idx) {
    long long s1 = 0, s2 = 0;
    for (int i = idx; i > 0; i -= (i & -i)) {
        s1 += bit1[i];
        s2 += bit2[i];
    }
    return s1 * (idx + 1) - s2;
}
 
long long qry_range(int l, int r) {
    return qry(r) - qry(l - 1);
}
 
struct Node {
    int l, r;
    long long c;
    bool operator<(const Node& o) const {
        return l < o.l;
    }
};
 
set<Node> st;
 
auto split(int x) {
    if (x > n) return st.end();
    auto it = st.lower_bound({x, 0, 0});
    if (it != st.end() && it->l == x) return it;
    --it;
    int l = it->l, r = it->r;
    long long c = it->c;
    st.erase(it);
    st.insert({l, x - 1, c});
    return st.insert({x, r, c}).first;
}
 
void assign(int l, int r, long long nc) {
    auto itr = split(r + 1);
    auto itl = split(l);
    for (auto it = itl; it != itr; ++it) {
        long long diff = abs(nc - it->c);
        add_range(it->l, it->r, diff);
    }
    st.erase(itl, itr);
    st.insert({l, r, nc});
}
 
void solve() {
    cin >> n >> m;
 
    for (int i = 1; i <= n; ++i) {
        st.insert({i, i, (long long)i});
    }
 
    while (m--) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) {
            long long x;
            cin >> x;
            assign(l, r, x);
        } else {
            cout << qry_range(l, r) << "
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