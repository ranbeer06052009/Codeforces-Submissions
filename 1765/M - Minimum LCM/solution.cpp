#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n; cin>>n;
    ll a=1,b=n-1;
    for(ll f=2;f*f<=n;f++){
        if(n%f==0){
            a=n/f; b=n-a; break;
        }
    }
    cout<<a<<" "<<b<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}