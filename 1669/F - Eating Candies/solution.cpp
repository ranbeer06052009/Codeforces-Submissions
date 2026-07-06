#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
 
    if (n == 1) {
        cout << 0 << "
";
        return;
    }
 
    int l = 0, r = n - 1;
    ll sum_left = w[l];
    ll sum_right = w[r];
    int max_candies = 0;
 
    while (l < r) {
        if (sum_left == sum_right) {
            max_candies = (l + 1) + (n - r);
            l++;
            sum_left += w[l];
        } else if (sum_left < sum_right) {
            l++;
            sum_left += w[l];
        } else {
            r--;
            sum_right += w[r];
        }
    }
 
    cout << max_candies << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}