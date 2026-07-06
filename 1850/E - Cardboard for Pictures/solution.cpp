#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n, c;
    cin >> n >> c;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    long long l = 1, r = 1e9, ans = -1;
    
    while (l <= r) {
        long long m = l + (r - l) / 2;
        long long sum = 0;
        
        for (int i = 0; i < n; ++i) {
            sum += (a[i] + 2 * m) * (a[i] + 2 * m);
            if (sum > c) break;
        }
 
        if (sum <= c) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
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