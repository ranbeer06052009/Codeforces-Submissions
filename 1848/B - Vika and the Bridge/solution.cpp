#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
 
    vector<int> c[k + 1];
    for (int i = 1; i <= k; i++) c[i].push_back(0);
    for (int i = 0; i < n; i++) c[v[i]].push_back(i + 1);
    for (int i = 1; i <= k; i++) c[i].push_back(n + 1);
 
    priority_queue<int> pq[k + 1];
    int ans = INT_MAX;
 
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < c[i].size() - 1; j++) {
            pq[i].push(c[i][j + 1] - c[i][j] - 1);
        }
 
        int mx = pq[i].top();
        pq[i].pop();
 
        if (mx % 2 == 0) {
            pq[i].push(mx / 2);
            pq[i].push((mx / 2) - 1);
        } else {
            pq[i].push(mx / 2);
            pq[i].push(mx / 2);
        }
 
        ans = min(ans, pq[i].top());
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