#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int w=0,ans;
    for(int i=0;i<k;i++) if(s[i]=='W') w++;
    ans=w;
    for(int i=k;i<n;i++){
        if(s[i]=='W') w++;
        if(s[i-k]=='W') w--;
        ans=min(ans,w);
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