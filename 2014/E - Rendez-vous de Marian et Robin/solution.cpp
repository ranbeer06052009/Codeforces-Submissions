#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll INF=1e18;
void solve(){
    int n,m,h; cin>>n>>m>>h;
    vector<int> horse(n+1,0);
    for(int i=0;i<h;i++){
        int x; cin>>x; horse[x]=1;
    }
    vector<vector<pair<int,ll>>> g(n+1);
    for(int i=0;i<m;i++){
        int u,v; ll w; cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    auto dijkstra=[&](int s){
        vector<array<ll,2>> d(n+1,{INF,INF});
        priority_queue<array<ll,3>,vector<array<ll,3>>,greater<>> pq;
        d[s][0]=0;
        pq.push({0,s,0});
        while(!pq.empty()){
            auto [dist,u,has]=pq.top(); pq.pop();
            if(dist>d[u][has]) continue;
            if(!has && horse[u] && d[u][1]>dist){
                d[u][1]=dist;
                pq.push({dist,u,1});
            }
            for(auto& [v,w]:g[u]){
                ll nw=dist+(has?w/2:w);
                if(d[v][has]>nw){
                    d[v][has]=nw;
                    pq.push({nw,v,has});
                }
            }
        }
        return d;
    };
    auto d1=dijkstra(1);
    auto d2=dijkstra(n);
    ll ans=INF;
    for(int i=1;i<=n;i++) ans=min(ans,max(min(d1[i][0],d1[i][1]),min(d2[i][0],d2[i][1])));
    cout<<(ans==INF?-1:ans)<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}