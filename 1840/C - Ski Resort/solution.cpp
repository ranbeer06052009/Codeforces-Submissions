#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n, k, q;
    cin >> n >> k >> q;
 
    long long ways = 0;
    long long len = 0;
 
    for (int i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        if (temp <= q) {
            len++;
        } else {
            if (len >= k) {
                long long diff = len - k + 1;
                ways += (diff * (diff + 1)) / 2;
            }
            len = 0;
        }
    }
 
    if (len >= k) {
        long long diff = len - k + 1;
        ways += (diff * (diff + 1)) / 2;
    }
 
    cout << ways << "
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