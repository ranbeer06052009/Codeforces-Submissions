#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int mod=1e9+7;
const int MAXN=200005;
 
void solve(){
    int n;
    ll c;
    cin>>n>>c;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<ll>());
    vector<ll> prefs(n+1,0);
    for(int i=0;i<n;i++){
        prefs[i+1]=prefs[i]+a[i];
    }
    int id=n/2+1;
    ll maxm=-1e18;
    for(int i=0;i<id;i++){
        ll cur=prefs[n-i]-(n-i)*c;
        maxm=max(maxm,cur);
    }
    cout<<maxm;
    return;
}
 
int main(){
    fastio();
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        cout<<'
';
    }
    return 0;
}