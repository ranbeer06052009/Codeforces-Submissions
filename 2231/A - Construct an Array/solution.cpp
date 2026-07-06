#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;;
 
void solve() {
    int n;
    cin>>n;
    for(int i=1; i<=2*n; i=i+2){
        cout<<i<<" ";
    }
    return;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        solve();
        cout<<'
';
    }
    return 0;
}