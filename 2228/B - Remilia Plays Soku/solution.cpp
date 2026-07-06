#include <bits/stdc++.h>
 
using namespace std;
using ll= long long;
 
void solve() {
    ll n,x1,x2,k;
    cin>>n>>x1>>x2>>k;
    ll diff=abs(x1-x2);
    diff=min(diff,n-diff);
    if(n<=3){
        cout<<diff;
        return;
    }
    ll ans=diff+k;
    cout<<ans;
    return;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>> t;
    while (t--) {
        solve();
        cout<<'
';
    }
    return 0;
}