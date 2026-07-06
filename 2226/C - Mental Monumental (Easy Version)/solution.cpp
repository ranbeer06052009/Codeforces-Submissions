#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// const int MOD = 676767677;
 
bool check(int m,vector<int> &a){
    vector<bool>cov(m,false);
    vector<int> r;
    r.reserve(a.size());
    for(int x:a){
        if(x<m && !cov[x]){
            cov[x]=true;
        }
        else{
            r.push_back(x);
        }
    }
    vector<int> u;
    u.reserve(m);
    for(int i=0; i<m; i++){
        if(!cov[i])u.push_back(i);
    }
    int p=0;
    for(int i:u){
        int req=2*i +1;
        while(p<r.size()&&r[p]<req){
            p++;
        }
        if(p==r.size()){
            return false;
        }
        p++;
    }
    return true;
}
 
void solve() {
    int n;
    cin>>n;
    vector<int>a(n,0),g(n+1,0);
    ll ans=n;
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int low=0,high=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(mid,a)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}