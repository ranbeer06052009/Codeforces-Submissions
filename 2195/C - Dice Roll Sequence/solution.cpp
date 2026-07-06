#include <bits/stdc++.h>
using namespace std;
 const int INF = 1e9;
 
bool adjacent(int x, int y){
    if(x == y) return false;
    if(x == 7 - y) return false;
    return true;
}
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    vector<vector<int>> dp(n, vector<int>(7, INF));
  
    for(int v = 1; v <= 6; v++)
        dp[0][v] = (a[0] != v);
 
    for(int i = 1; i < n; i++){
        for(int v = 1; v <= 6; v++){
            for(int u = 1; u <= 6; u++){
                if(adjacent(u, v)){
                    dp[i][v] = min(dp[i][v],
                                   dp[i-1][u] + (a[i] != v));
                }
            }
        }
    }
    
    int ans = INF;
    for(int v = 1; v <= 6; v++)
        ans = min(ans, dp[n-1][v]);
    
    cout << ans;
 
 
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