#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<ll> p(n+1,0);
    for(int i=0;i<n;i++) p[i+1]=p[i]+a[i];
    ll ans=0;
    for(int i=0;i<=k;i++) ans=max(ans,p[n-(k-i)]-p[2*i]);
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}