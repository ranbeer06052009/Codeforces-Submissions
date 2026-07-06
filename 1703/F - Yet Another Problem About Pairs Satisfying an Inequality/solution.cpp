#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n; cin>>n;
    vector<int> v;
    ll ans=0;
    for(int i=1;i<=n;i++){
        int a; cin>>a;
        if(a<i){
            ans+=lower_bound(v.begin(),v.end(),a)-v.begin();
            v.push_back(i);
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