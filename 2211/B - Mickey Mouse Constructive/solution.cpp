#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=676767677;
 
void solve() {
    ll x,y;
    cin>>x>>y;
    if(x==0){
        int ans=0;
        for (int i = 1; i <= sqrt(y); i++) {
            if (y % i == 0) {
            ans++;
            if (i != 1 && i != y / i) {
               ans++; 
               }
            }
        }if(y!=1)ans++;
        cout<<ans<<"
";
        for(int i=0; i<y;i++){
            cout<<-1<<" ";
        }
        // cout<<-1;
        return;
    }
    if(y==0){
        int ans=0;
        for (int i = 1; i <= sqrt(x); i++) {
            if (x % i == 0) {
            ans++;
            if (i != 1 && i != x/ i) {
               ans++; 
               }
            }
        }if(x!=1)ans++;
        cout<<ans<<"
";
        for(int i=0; i<x;i++){
            cout<<1<<" ";
        }
        // cout<<1;
        return;
    }
    if(x>y){
        int n=x-y;
        int ans=0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
            ans++;
            if (i != 1 && i != n / i) {
               ans++; 
               }
            }
        }if(n!=1)ans++;
        cout<<ans<<"
";
        for(int i=0; i<x;i++){
            cout<<1<<" ";
        }
        // cout<<1;
        for(int i=0; i<y;i++){
            cout<<-1<<" ";
        }
        // cout<<-1;
        return;
    }
    else if(x<y){
        int n=y-x;
        int ans=0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
            ans++;
            if (i != 1 && i != n / i) {
               ans++; 
               }
            }
        }if(n!=1)ans++;
        cout<<ans<<"
";
        for(int i=0; i<x;i++){
            cout<<1<<" ";
        }
        // cout<<1;
        for(int i=0; i<y;i++){
            cout<<-1<<" ";
        }
        // cout<<-1;
        return;
    }
    else{
        cout<<1<<"
";
        for(int i=0; i<x;i++){
            cout<<1<<" ";
        }
        // cout<<1;
        for(int i=0; i<y;i++){
            cout<<-1<<" ";
        }
        // cout<<-1;
        return;
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