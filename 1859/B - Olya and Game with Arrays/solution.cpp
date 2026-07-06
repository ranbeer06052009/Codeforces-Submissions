#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    vector<long long> v2;
    long long mn1 = 2e9;
 
    for (int i = 0; i < n; i++) {
        long long m;
        cin >> m;
        vector<long long> a(m);
        for (auto &x : a) cin >> x;
 
        sort(a.begin(), a.end());
 
        v2.push_back(a[1]);
        mn1 = min(mn1, a[0]);
    }
 
    sort(v2.begin(), v2.end());
 
    long long sum = accumulate(v2.begin(), v2.end(), 0LL);
    long long ans = mn1 + sum - v2[0];
    
    cout << ans << endl;
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