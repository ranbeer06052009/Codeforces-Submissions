#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,x; cin>>n>>x;
    ll v; cin>>v;
    ll l=v-x,r=v+x,ans=0;
    for(int i=1;i<n;i++){
        cin>>v;
        l=max(l,v-x);
        r=min(r,v+x);
        if(l>r){
            ans++;
            l=v-x; r=v+x;
        }
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