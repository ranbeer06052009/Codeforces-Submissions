#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<int>a(n+1,0);
    ll ans=0;
    int maxm=-1,minm=1002;
    for(int i=1;i<=n; i++){
        cin>>a[i];
        maxm=max(maxm,a[i]);
        minm=min(minm,a[i]);
    }
    ans=(maxm-minm+1)/2;
    cout<<ans;
    return;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout<<'
';
    }
}