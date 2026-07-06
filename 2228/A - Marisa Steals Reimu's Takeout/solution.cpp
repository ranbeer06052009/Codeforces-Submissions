#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin>> n;
    vector<int> w(n),a(3);
    for(int i=0; i<n; i++){
        cin>> w[i];
        a[w[i]]++;
    }
    int minm=min(a[1],a[2]);
    cout<<a[0]+minm+(a[1]-minm)/3+(a[2]-minm)/3;
    return;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>> t;
    while (t--) {
        solve();
        cout<<'
';
    }
    return 0;
}