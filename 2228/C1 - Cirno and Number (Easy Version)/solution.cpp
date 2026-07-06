#include <bits/stdc++.h>
 
using namespace std;
using ll= unsigned long long;
 
void solve() {
    ll a,n;
    cin>>a>>n;
    vector<ll> d(n);
    for(int i=0; i<n; i++){
        cin>>d[i];
    }
    ll tt=a;int cnt=0;
    if(a==0)cnt=1;
    while(tt>0){
        tt/=10;
        cnt++;
    }
    ll ans=-1;
    if(cnt>1){
        ll c=0;
        for(int i=0; i<cnt-1; i++){
            c=c*10+d[1];
            ll dif=(a>c)?(a-c):(c-a);
            ans=min(ans,dif);
        }
    }
    int s;
    if(d[0]==0)s=d[1];
    else s=d[0];
    ll c2=s;
    for(int i=0; i<cnt; i++)c2=c2*10+d[0];
    ll dif1=(a>c2)?(a-c2):(c2-a);
    ans=min(ans,dif1);
 
    ll p=1;
    for(int i=0; i<cnt-1; i++)p*=10;
    ll pref=0;
    ll cur=a;
    for(int i=0; i<cnt; i++){
        int tar=cur/p;
        cur%=p;
        p/=10;
        for(int j=0; j<n; j++){
            if(d[j]==tar)continue;
            int f,r;
            if(d[j]>tar) f=d[0];
            else f=d[1];
            r=cnt-1-i;
            ll res=pref*10+d[j];
            for(int k=0;k<r; k++){
                res=res*10+f;
            }
            ll dif=(a>res)?(a-res):(res-a);
            ans=min(ans,dif);
        }
        if(tar!=d[0]&&tar!=d[1]){
            break;
        }
        pref=pref*10+tar;
        if(i==cnt-1){
            ll dif=(a>pref)?(a-pref):(pref-a);
            ans=min(ans,dif);
        }
    }
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