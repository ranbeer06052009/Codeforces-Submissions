#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 676767677;
 
void solve() {
    int n;
    cin>>n;
    vector<ll> a(n+1,0),b,c,d,e;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]%2==0&&a[i]%3!=0)b.push_back(a[i]);
        if(a[i]%3==0&&a[i]%2!=0)c.push_back(a[i]);
        if(a[i]%2!=0&&a[i]%3!=0)d.push_back(a[i]);
        if(a[i]%2==0&&a[i]%3==0)e.push_back(a[i]);
    }
    int k=b.size(),l=c.size();
    if(k<=l){
            for(int i:e){
            cout<<i<<" ";
        }
        for(int i:b){
            cout<<i<<" ";
        }
        for(int i:d){
            cout<<i<<" ";
        }
        for(int i:c){
            cout<<i<<" ";
        }
        return;
    }
    if(l<k){
        for(int i:e){
        cout<<i<<" ";
        }
        for(int i:c){
            cout<<i<<" ";
        }
        for(int i:d){
            cout<<i<<" ";
        }
        for(int i:b){
            cout<<i<<" ";
        }
    }
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