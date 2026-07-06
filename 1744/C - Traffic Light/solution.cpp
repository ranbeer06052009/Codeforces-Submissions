#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    s+=s;
    n*=2;
    ll lg=-1,ans=0;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='g') lg=i;
        if(s[i]==c && lg!=-1) ans=max(ans,lg-i);
    }
    cout<<ans;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
        cout<<"
";
    } 
    return 0;
}