#include <bits/stdc++.h>
using namespace std;
 
const int M = 5000000;
int dp[M + 1];
 
void pre() {
    for (int i = 2; i * i <= M; i++) {
        if (!dp[i]) {
            for (int j = i * i; j <= M; j += i) {
                if (!dp[j]) dp[j] = i;
            }
        }
    }
    
    for (int i = 2; i <= M; i++) {
        if (!dp[i]) dp[i] = 1;
        else dp[i] = dp[i / dp[i]] + 1;
    }
    
    for (int i = 2; i <= M; i++) {
        dp[i] += dp[i - 1];
    }
}
 
void solve() {
    int a, b;
    cin >> a >> b;
    cout << dp[a] - dp[b] << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    pre();
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}