#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;;
 
void solve() {
    int n;
    cin>>n;
    vector<ll> c(n+1,0);
    bool flag=false;
    ll ans=0,cnt1=0,cnt=0;
    ll help=0;
    for(int i=1; i<=n; i++){
        cin>>c[i];
        if(c[i]>=2){
            flag=true;
            cnt++;
            help=c[i];
        }
        else cnt1++;
    }
    if(cnt==1){
        ans=help+min(cnt1,help/2);
        if(ans<3)cout<<0;
        else cout<<ans;
        return;
    }
    cnt1=0;
    help=0;
    for(int i=1; i<=n; i++){
        if(c[i]>=2){
            flag=true;
            ans+=c[i];
            help+=(c[i]-2)/2;
        }
        else cnt1++;
    }
    if(!flag||(n==1&&c[1]<=2)){
        cout<<0;
        return;
    }
    ans+=min(cnt1,help);
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
        cout << '
';
    }
}