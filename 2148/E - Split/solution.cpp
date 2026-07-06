#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
 
        // total counts (values are <= n per statement)
        vector<int> total(n+1, 0);
        for (int x : a) ++total[x];
 
        // If any value's total is not divisible by k => impossible
        bool okAll = true;
        for (int v = 1; v <= n; ++v) {
            if (total[v] % k != 0) {
                okAll = false;
                break;
            }
        }
        if (!okAll) {
            cout << 0 << '
';
            continue;
        }
 
        // limits for subarray counts
        vector<int> limit(n+1, 0);
        for (int v = 1; v <= n; ++v) limit[v] = total[v] / k;
 
        // sliding window counting subarrays where each value's count <= limit[v]
        vector<int> cnt(n+1, 0);
        ll ans = 0;
        int L = 0;
        for (int R = 0; R < n; ++R) {
            ++cnt[a[R]];
            // if some value exceeds its allowed limit, move L until it's ok
            while (cnt[a[R]] > limit[a[R]]) {
                --cnt[a[L]];
                ++L;
            }
            ans += (R - L + 1);
        }
 
        cout << ans << '
';
    }
    return 0;
}