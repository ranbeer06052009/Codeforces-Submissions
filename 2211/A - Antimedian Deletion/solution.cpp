#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n+1);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<1;
        return;
    }
    if(n==2){
        cout<<2<<" "<<2;
        return;
    }
    for(ll i=1; i<n;i++)cout<<2<<" ";
    cout<<2;;
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