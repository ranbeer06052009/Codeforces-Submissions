#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin>>n;
    vector<ll>a(n),b;
    int cnt=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll help=0;
    for(int i=n-1; i>=0; i--){
        ll cur=a[i];
        if(help%2==1){
            cur=-cur;
        }
        if(cur>0){
            b.push_back(i+1);
            help++;
        }
    }
    cout<<b.size()<<"
";
    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<(i==b.size()-1?"":" ");
    }
    if (!b.empty()) cout << "
";
    return;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}