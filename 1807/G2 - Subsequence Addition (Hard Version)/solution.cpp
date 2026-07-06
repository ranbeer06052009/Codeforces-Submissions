#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n; cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    if(a[0]!=1){
        cout<<"NO
";
        return;
    }
    ll s=1;
    for(int i=1;i<n;i++){
        if(a[i]>s){
            cout<<"NO
";
            return;
        }
        s+=a[i];
    }
    cout<<"YES
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}