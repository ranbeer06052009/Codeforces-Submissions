#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    string s; cin>>s;
    ll n=s.size();
    s+=s;
    ll mx=0,c=0;
    for(char x:s){
        if(x=='1') mx=max(mx,++c);
        else c=0;
    }
    if(mx>=n){
        cout<<n*n<<"
";
        return;
    }
    ll a=(mx+1)/2,b=(mx+2)/2;
    cout<<a*b<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}