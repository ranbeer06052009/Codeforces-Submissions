#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=676767677;
 
void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n+1),p(n+1);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        p[a[i]]=i;
    }
    ll ans=0,cnt1=0,cnt2=0;
    for(ll i=1; i<=n; i++){
        if(a[i]>i){
            cnt2++;
        }
        if(p[i]<i)cnt2--;
        if(a[i]<=i){
            cnt1++;
        }
        ans=max(ans,cnt1+cnt2);
    }
    // ans=max(ans,cnt);
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