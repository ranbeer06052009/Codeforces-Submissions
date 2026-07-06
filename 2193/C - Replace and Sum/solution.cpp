#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n,q;
    cin >> n>> q ;
    vector<int> a(n+1,0),b(n+1,0);
    for (int i = 1; i <=n; i++) {
        cin >> a[i] ;
    }
    for (int i = 1; i <=n; i++) {
        cin >> b[i] ;
    }
    a[n]=max(a[n],b[n]);
    vector<int> suffix_sum(n+2,0);
    suffix_sum[n]=a[n];
    suffix_sum[n+1]=0;
    for(int i=n-1; i>=1; i--){
        a[i]=max({a[i], b[i],a[i+1]});
        suffix_sum[i]= suffix_sum[i+1]+a[i];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << suffix_sum[l]-suffix_sum[r+1] << " ";
    }
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