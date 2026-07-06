#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a1=i+1;
        int a2=3*n-2*i-1;
        int a3=3*n-2*i;
        cout<<a1<<" "<<a2<<" "<<a3<<" ";
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