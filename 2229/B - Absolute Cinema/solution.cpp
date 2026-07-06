#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<ll>a(n+1,0),b(n+1,0);
    ll ans=0,maxm=-1;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)cin>>b[i];
    for(int i=1; i<=n; i++){
        if(a[i]>b[i]){
            ans+=a[i];
            ll tmp=a[i];
            a[i]=b[i];
            b[i]=tmp;
        }
        else ans+=b[i];
    }
    for(int i=1; i<=n; i++){
        maxm=max(maxm,a[i]);
    }
    cout<<ans+maxm;
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