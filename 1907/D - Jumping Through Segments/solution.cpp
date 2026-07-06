#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
    int l=0,r=1e9,ans=1e9;
    while(l<=r){
        int m=l+(r-l)/2;
        bool ok=1;
        int mn=0,mx=0;
        for(int i=0;i<n;i++){
            mn=max(mn-m,a[i].first);
            mx=min(mx+m,a[i].second);
            if(mn>mx){ ok=0; break; }
        }
        if(ok){
            ans=m; r=m-1;
        }else l=m+1;
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