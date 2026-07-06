#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n,d; cin>>n>>d;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll l=0,r=n-1,ans=0;
    while(l<=r){
        ll sz=d/a[r]+1;
        if(r-l+1>=sz){
            ans++;
            l+=sz-1;
            r--;
        }else break;
    }
    cout<<ans<<"
";
    return 0;
}