#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll x,n; cin>>x>>n;
    ll d=0;
    if(n%4==1) d=-n;
    else if(n%4==2) d=1;
    else if(n%4==3) d=n+1;
    if(x%2!=0) d=-d;
    cout<<x+d<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}