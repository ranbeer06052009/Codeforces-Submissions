#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,m; cin>>n>>m;
    vector<vector<ll>> a(m,vector<ll>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>a[j][i];
    }
    ll ans=0;
    for(int i=0;i<m;i++){
        sort(a[i].begin(),a[i].end());
        for(ll j=0;j<n;j++) ans+=a[i][j]*(2*j-n+1);
    }
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}