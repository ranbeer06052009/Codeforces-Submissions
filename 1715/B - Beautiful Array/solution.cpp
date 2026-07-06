#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,k,b,s; cin>>n>>k>>b>>s;
    ll mn=k*b,mx=k*b+(k-1)*n;
    if(s<mn || s>mx){
        cout<<"-1
";
        return;
    }
    vector<ll> a(n,0);
    a[0]=mn; s-=mn;
    for(int i=0;i<n;i++){
        ll d=min(k-1,s);
        a[i]+=d; s-=d;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<(i==n-1?"":" ");
    cout<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}