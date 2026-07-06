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
 
void add(int &idx,int &k, long long &current_power,vector<int> &pref,vector<int> &freq){
    int val = pref[idx];
    current_power += freq[val ^ k];
    freq[val]++;
}
 
void remove(int &idx,int &k, long long &current_power,vector<int> &pref,vector<int> &freq){
    int val = pref[idx];
    freq[val]--;
    current_power -= freq[val ^ k];
}
 
void solve(){
    int n, m,k;
    cin>> n>>m >>k;
    BLOCK_SIZE=(int)sqrt(n);
    vector<int> a(n+1),pref(n+1,0);
    for (int i = 1; i<= n; i++) {
        cin>>a[i];
        pref[i]=pref[i-1]^a[i];
    }
    vector<Query> queries(m);
    for (int i= 0; i<m; i++) {
        int l,r;
        cin >>l >>r;
        queries[i] ={l-1,r,i};
    }
 
    sort(queries.begin(), queries.end());
    vector<int> freq(1<<20, 0);
    vector<long long> ans(m);
    long long current_power = 0;
    int L = 1, R = 0;  
    for (const auto& q : queries) {
        while (L > q.l) { L--; add(L,k,current_power,pref,freq); }
        while (R < q.r) { R++; add(R,k,current_power,pref,freq); }
        while (L < q.l) { remove(L,k,current_power,pref,freq); L++; }
        while (R > q.r) { remove(R,k,current_power,pref,freq); R--; }  
        ans[q.id] = current_power;
    }
    for (int i = 0; i < m; i++) {
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