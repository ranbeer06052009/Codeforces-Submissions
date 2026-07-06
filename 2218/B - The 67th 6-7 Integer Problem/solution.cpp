#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int sum=0,maxm=-68;
    for(int i=0; i<7; i++){
        int x;
        cin>>x;
        maxm=max(maxm,x);
        sum+=x;
    }
    cout<<2*maxm-sum;
 
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