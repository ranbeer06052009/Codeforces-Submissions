#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const int K = 1e6;
const int MAX_VAL = 1e9;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> cnt;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ++cnt[a[i]];
    }
    
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += (ll)(cnt[a[i]] - 1) * (cnt[a[i]] - 2);
    }
    
    for (auto el : cnt) {
        int num = el.first;
        int val = el.second;
        
        if (num > K) {
            for (int b = 2; b * num <= MAX_VAL; ++b) {
                if (num % b == 0 && cnt.find(num / b) != cnt.end() && cnt.find(num * b) != cnt.end()) {
                    ans += (ll)(cnt[num / b]) * (cnt[num * b]) * val;
                }
            }
        } else {
            for (int b = 2; b * b <= num; ++b) {
                if (num % b == 0) {
                    if ((ll)num * b <= (ll)MAX_VAL && cnt.find(num / b) != cnt.end() && cnt.find(num * b) != cnt.end()) {
                        ans += (ll)(cnt[num / b]) * (cnt[num * b]) * val;
                    }
                    if (b * b != num) {
                        if ((ll)num * num / b <= (ll)MAX_VAL && cnt.find(b) != cnt.end() && cnt.find(num / b * num) != cnt.end()) {
                            ans += (ll)(cnt[b]) * (cnt[num / b * num]) * val;
                        }
                    }
                }
            }
            if (num > 1 && (ll)num * num <= (ll)MAX_VAL && cnt.find(1) != cnt.end() && cnt.find(num * num) != cnt.end()) {
                ans += (ll)(cnt[1]) * (cnt[num * num]) * val;
            }
        }
    }
    cout << ans << "
";
}
 
int32_t main() {
    // Fast I/O optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}