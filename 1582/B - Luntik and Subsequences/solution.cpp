#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    
    ll count_zeros = 0;
    ll count_ones = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) count_zeros++;
        else if (x == 1) count_ones++;
    }
    ll ways = (1LL << count_zeros) * count_ones;
    
    cout << ways << "
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