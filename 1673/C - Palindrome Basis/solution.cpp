#include <bits/stdc++.h>
using namespace std;
 
bool check(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return n == rev;
}
 
const int M = 1e9 + 7;
const int N = 4e4 + 5;
 
vector<int> a;
vector<int> dp(N, 0);
 
void precompute() {
    for (int i = 1; i < N; i++) {
        if (check(i)) {
            a.push_back(i);
        }
    }
 
    dp[0] = 1;
    for (int coin : a) {
        for (int x = coin; x < N; x++) {
            dp[x] = (dp[x] + dp[x - coin]);
            if (dp[x] >= M) dp[x] -= M;
        }
    }
}
 
void solve() {
    int n;
    cin >> n;
    cout << dp[n] << '
';
}
 
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    precompute();
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}