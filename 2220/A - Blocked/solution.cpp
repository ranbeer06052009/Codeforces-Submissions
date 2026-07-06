#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1,0),b(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end(),greater<int>());
    for(int i=1; i<=n-1; i++){
        if(a[i]==a[i-1]){
            cout<<-1;
            return;
        }
    }
    for(int i=0; i<=n-1; i++){
        cout<<a[i]<<" ";
    }
    return;
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