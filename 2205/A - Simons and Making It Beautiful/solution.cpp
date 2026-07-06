#include <bits/stdc++.h>
 using namespace std;
 
void solve() {
    int n,ind;
    cin>>n;
 
    vector<int> a(n+1,0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if(a[i]==n) ind=i;
    }
    int temp= a[ind];
    a[ind]=a[1];
    a[1]=temp;
    for (int i = 1; i <= n; ++i) {
        cout <<a[i]<<" ";
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout<<'
';
    }
}