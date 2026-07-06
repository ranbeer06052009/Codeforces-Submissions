#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<bool> rm(n+1, 0);
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            if(s[j-1]=='1') break;
            if(!rm[j]){
                rm[j]=1;
                ans+=i;
            }
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