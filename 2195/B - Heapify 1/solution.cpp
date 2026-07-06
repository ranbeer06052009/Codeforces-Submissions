#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    bool help=true;
    vector<int>a(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>a[i];
        // if(a[i]%2!=i%2) help=false;
        int u=i;
        int v=a[i];
        while(u%2==0)u/=2;
        while(v%2==0)v/=2;
        if(u!=v) help=false;
    }
    // bool help=true;
    // for(int i=n/2+1; i<=n; i++){
    //     if((i)%2 && a[i]!=i) help=false;
    // }
    if(help){cout<<"YES";}
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