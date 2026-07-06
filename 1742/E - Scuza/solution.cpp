#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,q; cin>>n>>q;
    vector<ll> pmax(n),psum(n+1,0);
    ll mx=0;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        mx=max(mx,x);
        pmax[i]=mx;
        psum[i+1]=psum[i]+x;
    }
    for(int i=0;i<q;i++){
        ll k; cin>>k;
        int id=upper_bound(pmax.begin(),pmax.end(),k)-pmax.begin();
        cout<<psum[id]<<" ";
    }
    cout<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}