#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n; cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(l==-1) l=i;
            r=i;
        }
    }
    while(l>0 && b[l-1]<=b[l]) l--;
    while(r<n-1 && b[r+1]>=b[r]) r++;
    cout<<l+1<<" "<<r+1<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}