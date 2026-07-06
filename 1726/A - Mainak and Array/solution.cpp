#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long ans = a[n - 1] - a[0];
 
    for (int i = 1; i < n; i++) {
        ans = max(ans, a[i] - a[0]);
    }
 
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, a[n - 1] - a[i]);
    }
 
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, a[i] - a[i + 1]);
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