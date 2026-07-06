#include <bits/stdc++.h>
using namespace std;
using ll = long long;;
 
void solve() {
    string s;
    cin>>s;
    ll n=s.size();
    ll ans=0;
    ll cnt=0,cnt2=0;
    ll cnt1=0;
    for(ll i=0; i<n;i++){
        if(s[i]=='4')ans++;
        if(s[i]=='1'||s[i]=='3')cnt++;
        if(s[i]=='2'){
            cnt1=min(cnt,cnt1+1);
        }
    }
    ans+=cnt1;
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