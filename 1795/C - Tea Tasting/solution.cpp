#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin>>n;
    vector<ll>a(n+1,0),b(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        cin>>b[i];
    }
    vector<ll> pr(n + 1, 0);
	for (int i = 1; i <= n; i++) pr[i] = pr[i - 1] + b[i];
    vector<ll> ans(n+1,0),cnt(n+2,0);
    for(int i=1; i<=n; i++){
        ll x=a[i]+pr[i-1];
        ll j=upper_bound(pr.begin(),pr.end(),x)-pr.begin();
        if(j<=n){
            ans[j]+=x-pr[j-1];
        } 
        cnt[i]++;
        cnt[j]--;
    }
    for(int i=1; i<=n; i++){
        cnt[i]+=cnt[i-1];
        ans[i]+=cnt[i]*b[i];
    }
 
    // int cnt=0;
    // while(cnt<n){
    //     for(int i=1; i<=n; i++){
    //         ans[i]+=(i-cnt>0)?min(a[i-cnt],b[i]):0;
    //         if(i-cnt>0)a[i-cnt]-=min(a[i-cnt],b[i]);
    //     }
    //     cnt++;
    // }
    for(int i=1; i<=n; i++){
        cout<<ans[i]<<" ";
    }
    return;
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