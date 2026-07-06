#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n; cin>>n;
    map<int,int> c;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        c[x]++;
    }
    int ans=0;
    for(auto [x,f]:c) ans+=max(0,f-c[x-1]);
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}