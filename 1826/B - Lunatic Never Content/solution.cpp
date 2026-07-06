#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int& x:a) cin>>x;
    int ans=0;
    for(int i=0;i<n;i++) ans=gcd(ans,abs(a[i]-a[n-1-i]));
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}