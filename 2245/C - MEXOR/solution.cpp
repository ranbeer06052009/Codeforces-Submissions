#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int mod=1e9+7;
const int MAXN=200005;
 
void solve(){
    int n,k;
    cin>>n>>k;
    
    ll x=k^n;
    ll m=1;
    while(m<=n-1){
        m*=2;
    }
    if(x>=m){
        cout<<"NO";
        return;
    }
    vector<int> p(n);
    if(x==0){
        for(int i=0; i<n; i++){
            p[i]=n-1-i;
        }
    }else if(x<=n-1){
        p[n-1]=x;
        p[n-2]=0;
        int id=n-1;
        for(int i=0; i<n-2; i++){
            while(id==x||id==0)id--;
            p[i]=id;
            id--;
        }
    }else{
        ll b=m/2;
        ll a=x-b;
        p[n-1]=b;p[n-2]=a;p[n-3]=0;
        int id=n-1;
        for(int i=0; i<=n-4; i++){
            while(id==a||id==b||id==0)id--;
            p[i]=id;
            id--;
        }
    }
    cout<<"YES"<<"
";
    for(int i=0; i<n; i++){
        cout<<p[i]<<" ";
    }
    return;
}
 
int main(){
    fastio();
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        cout<<'
';
    }
    return 0;
}