#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,s, x;
    cin >> n >> s>> x;
    vector<int> a(n+1,0);
    long long sum = 0;
    for (int i = 1; i <=n; ++i) {
        cin >> a[i] ;
        sum += a[i];
    }
    if(sum>s){
        cout << "NO";
        return;
    }
    else if(sum==s){
        cout << "YES";
        return;
    }
    else{
       if((s-sum)%x==0){
           cout << "YES";
       }
       else{
           cout << "NO";
       }
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