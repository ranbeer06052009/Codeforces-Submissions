#include <bits/stdc++.h>
using namespace std;
using ll = long long;;
 
void solve() {
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans=0;
    ans=min(n*a,(n/3)*b+min((n%3)*a,b));
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