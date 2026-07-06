#include<bits/stdc++.h>
using namespace std;
int dfs(int u,int p,int dep,vector<vector<int>>& adj,vector<vector<int>>& d){
    int mx=dep;
    for(int v:adj[u]){
        if(v!=p) mx=max(mx,dfs(v,u,dep+1,adj,d));
    }
    d[dep].push_back(mx);
    return mx;
}
void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n);
    for(int i=0;i<n-1;i++){
        int u,v; cin>>u>>v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> d(n);
    dfs(0,-1,0,adj,d);
    int ans=n;
    multiset<int> s;
    for(int i=0;i<n;i++){
        for(int x:d[i]) s.insert(x);
        while(!s.empty() && *s.begin()<i) s.erase(s.begin());
        ans=min(ans,n-(int)s.size());
    }
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc; cin>>tc;
    while(tc--) solve();
    return 0;
}