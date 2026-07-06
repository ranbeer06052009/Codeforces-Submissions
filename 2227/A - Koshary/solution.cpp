#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 676767677;
 
void solve() {
    int x,y;
    cin>>x>>y;
    bool flag=false;
    if(x%2==0 && y%2==0)flag=true;
    if(x%2==1 && y%2==0)flag=true;
    if(x%2==0 && y%2==1)flag=true;
    if(flag)cout<<"YES";
    else cout<<"NO";
 
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