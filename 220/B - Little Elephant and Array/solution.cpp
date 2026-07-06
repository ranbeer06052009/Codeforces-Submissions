#include <bits/stdc++.h>
using namespace std;
int BLOCK_SIZE;
 
struct Query {
    int l, r, id;
    
    bool operator<(const Query& other) const {
        int block_own = l / BLOCK_SIZE;
        int block_other = other.l / BLOCK_SIZE;
        if (block_own != block_other)
            return block_own < block_other;
        return (block_own & 1) ? r < other.r : r > other.r;
    }
};
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    cin >> n >> m;
 
    BLOCK_SIZE =(int)sqrt(n);
 
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    vector<Query> queries(m);
    for (int i = 0; i < m; i++) {
        cin >> queries[i].l >> queries[i].r;
        queries[i].id = i;
    }
    sort(queries.begin(), queries.end());
 
    
    vector<int> freq(n + 1, 0);
    vector<int> ans(m);
    int current_ans = 0;
    auto add = [&](int idx) {
        int val = a[idx];
        if (val > n) return; 
        
        if (freq[val] == val) current_ans--; 
        freq[val]++;
        if (freq[val] == val) current_ans++; 
    };
    auto remove = [&](int idx) {
        int val = a[idx];
        if (val > n) return; 
        
        if (freq[val] == val) current_ans--; 
        freq[val]--;
        if (freq[val] == val) current_ans++; 
    };
 
    int L = 1, R = 0;
    
    for (const auto& q : queries) {
        while (L > q.l) {
            L--;
            add(L);
        }
        while (R < q.r) {
            R++;
            add(R);
        }
        while (L < q.l) {
            remove(L);
            L++;
        }
        while (R > q.r) {
            remove(R);
            R--;
        }
        ans[q.id] = current_ans;
    }
    for (int i = 0; i < m; i++) {
        cout << ans[i] << "
";
    }
 
    return 0;
}