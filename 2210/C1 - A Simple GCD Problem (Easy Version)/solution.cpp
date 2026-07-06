#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=676767677;
 
void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n+1),b(n+1);
    ll g=0,flag=0;
    // vector<ll> prefix_g(n+1);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        // g=__gcd(g,a[i]);
        // prefix_g[i]=g;
        if(i!=1&&a[i]!=a[i-1])flag=1;
    }
    for(ll i=1; i<=n; i++){
        cin>>b[i];
        //a[i]=b[i]
    }
    if(!flag){
        cout<<0;
        return;
    }
    ll ans=0;
    for(ll i=1; i<=n; i++){
        ll dl,dr;
        if(i>1)dl=__gcd(a[i-1],a[i]);
        else dl=1LL;
        if(i<n)dr=__gcd(a[i],a[i+1]);
        else dr=1LL;
        ll g=__gcd(dl,dr);
        ll d=dl/g*dr;
        if(d>=a[i])continue;
        bool ok=true;
        if(i>1) ok=ok&(__gcd(a[i-1]/dl,dr/g)==1LL);
        if(i<n) ok=ok&(__gcd(dl/g,a[i+1]/dr)==1LL);
        if(ok) ans++;
    }
    cout<<ans;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}