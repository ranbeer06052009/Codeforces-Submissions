#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<ll>a(n+1,0);
    int cnt=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    vector<ll>pref(n+2,0),suf(n+2,0);
    for(int i=1; i<=n; i++){
        pref[i]=pref[i-1]+abs(a[i]);
    }
    for(int i=n; i>=1; i--){
        suf[i]=suf[i+1]+a[i];
    }
    ll sum=suf[1];
    int k=0;
    for(int i=1; i<=n; i++){
        if(a[i]>0){
            ll c=suf[i+1]-a[i]+pref[i-1];
            if(c>sum){
                sum=c;
                k=i;
            }
        }
    }
    vector<ll>b;
    if(k>0){
        int help=0;
        for(int i=k-1;i>=1;i--){
            int cb=(a[i]>0?1:0);
            if(help%2==1){
                cb^=1;
            }
            if(cb==1){
                b.push_back(i);
                help++;
            }
        }
        b.push_back(k);
    }
    cout<<b.size()<<"
";
    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<(i==b.size()-1?"":" ");
    }
    if (!b.empty()) cout << "
";
    return;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}