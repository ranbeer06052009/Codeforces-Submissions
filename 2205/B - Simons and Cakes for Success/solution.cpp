#include <bits/stdc++.h>
 using namespace std;
 typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    bool two= false;
    unordered_set<ll> st;
    while(n%2==0){
        two=true;
        n/=2;
    }
    ll ans=1;
    if(two) ans*=2;
    for(int i=3; i*i<=n; i+=2){
        bool flag=false;
        while(n%i==0){
            flag=true;
            n/=i;
        }
        if(flag) ans*=i;
    }
    if(n>2) ans*=n;
    cout<<ans;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout<<'
';
    }
}