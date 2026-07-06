#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n);
    for(int i=1;i<n;i++){
        int p; cin>>p;
        adj[p-1].push_back(i);
    }
    string s; cin>>s;
    
    int ans=0;
    auto dfs=[&](auto& self, int u) -> int {
        int bal=(s[u]=='W'?1:-1);
        for(int v:adj[u]) bal+=self(self, v);
        if(bal==0) ans++;
        return bal;
    };
    
    dfs(dfs, 0);
    cout<<ans<<"
";
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}