#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll M=1e9+7;
void solve(){
    int n; cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++) cin>>b[i];
    sort(b.rbegin(),b.rend());
    ll ans=1;
    for(int i=0;i<n;i++){
        ll c=a.end()-upper_bound(a.begin(),a.end(),b[i]);
        ans=(ans*max(c-i,0LL))%M;
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