#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
const int n=1e7;
void solve(){
    int m;
    cin>>m;
    vector<bool> f(n+1,1);
    f[0]= 0;
    f[1]= 0;
    for(ll i=2; i*i<=n; i++){
        if(f[i]==1){
            for(ll j=i*i; j<=n; j+=i){
                f[j]=0;
            }
        }
    }
    // unordered_set<ll> st;
    // for(int i=2; i<=n; i++){
    //     if(f[i]){
    //         st.insert(i*i);
    //     }
    // }
    for(int i=1; i<=m; i++){
        ll x;
        cin>>x;
        ll s=sqrt(x);
        if(f[s]&&s*s==x){
            cout<<"YES"<<"
";
        }else{
            cout<<"NO"<<"
";
        }
    }
    return;
}
int main(){
    fastio();
    int tt=1;
    //cin>>tt;
    while(tt--){
        solve();
        //cout<<"
";
    }
    return 0;
}