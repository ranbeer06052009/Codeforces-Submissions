#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int l=0,r=0;l<n;l=r){
        while(r<n && a[l]==a[r]) r++;
        if(r-l==1){ cout<<"-1
"; return; }
    }
    for(int l=0,r=0;l<n;l=r){
        while(r<n && a[l]==a[r]) r++;
        for(int i=l+1;i<r;i++) cout<<i+1<<" ";
        cout<<l+1<<" ";
    }
    cout<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}