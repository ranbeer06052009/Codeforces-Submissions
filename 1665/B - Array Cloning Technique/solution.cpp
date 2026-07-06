#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    map<int,int> c;
    int mx=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        mx=max(mx,++c[x]);
    }
    int ans=0;
    while(mx<n){
        ans++;
        int d=min(mx,n-mx);
        ans+=d; mx+=d;
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