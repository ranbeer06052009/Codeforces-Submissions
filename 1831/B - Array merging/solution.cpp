#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    vector<long long> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
 
    vector<long long> max_a(2 * n + 2, 0);
    vector<long long> max_b(2 * n + 2, 0);
 
    long long cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cnt++;
        } else {
            max_a[a[i - 1]] = max(max_a[a[i - 1]], cnt);
            cnt = 1;
        }
    }
    max_a[a[n - 1]] = max(max_a[a[n - 1]], cnt);
 
    cnt = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i - 1]) {
            cnt++;
        } else {
            max_b[b[i - 1]] = max(max_b[b[i - 1]], cnt);
            cnt = 1;
        }
    }
    max_b[b[n - 1]] = max(max_b[b[n - 1]], cnt);
 
    long long ans = 0;
    for (int i = 1; i <= 2 * n; i++) {
        ans = max(ans, max_a[i] + max_b[i]);
    }
 
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}