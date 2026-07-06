#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    bool one=false, c7= false;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        // if(a[i]==1) one=true;
        if(a[i]==67) c7=true;
    }
    if(c7){cout<<"yes";}
    else cout<<"No";
 
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