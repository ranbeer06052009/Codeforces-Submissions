#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 676767677;
 
void solve() {
    int n;
    cin>>n;
    vector<int>a(n+1,-1),g(n+1,0);
    ll ans=0;
    bool flag=false;
    for(int i=1; i<=n;i++){
        cin>>a[i];
    }
    for(int i=1; i<=n;i++){
        if(abs(a[i]-a[i-1])==__gcd(a[i],a[i-1]))ans++;
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