#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, w;
    cin >> n >> w;
    
    vector<int> cnt(30, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[__lg(x)]++;
    }
    
    int height = 0;
    int placed = 0;
    
    while (placed < n) {
        int space = w;
        for (int i = 29; i >= 0; i--) {
            if (cnt[i] > 0) {
                int take = min(cnt[i], space >> i);
                space -= take << i;
                cnt[i] -= take;
                placed += take;
            }
        }
        height++;
    }
    
    cout << height << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}