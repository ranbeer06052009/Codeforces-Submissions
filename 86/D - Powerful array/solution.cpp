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
 
void add(int &idx, long long &current_power,vector<int> &a,vector<int> &freq){
    long long val = a[idx];
    long long current_count = freq[val];
    current_power -= current_count * current_count * val;
    freq[val]++;
    current_count++;
    current_power += current_count * current_count * val;
}
 
void remove(int &idx, long long &current_power,vector<int> &a,vector<int> &freq){
    long long val = a[idx];
    long long current_count = freq[val];
    current_power -= current_count * current_count * val;
    freq[val]--;
    current_count--;
    current_power += current_count * current_count * val;
}
 
void solve(){
    int n, t;
    cin >> n >> t;
    BLOCK_SIZE = (int)sqrt(n);
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<Query> queries(t);
    for (int i = 0; i < t; i++) {
        cin >> queries[i].l >> queries[i].r;
        queries[i].id = i;
    }
 
    sort(queries.begin(), queries.end());
    vector<int> freq(1000005, 0);
    vector<long long> ans(t);
    long long current_power = 0;
    int L = 1, R = 0;  
    for (const auto& q : queries) {
        while (L > q.l) { L--; add(L,current_power,a,freq); }
        while (R < q.r) { R++; add(R,current_power,a,freq); }
        while (L < q.l) { remove(L,current_power,a,freq); L++; }
        while (R > q.r) { remove(R,current_power,a,freq); R--; }  
        ans[q.id] = current_power;
    }
    for (int i = 0; i < t; i++) {
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