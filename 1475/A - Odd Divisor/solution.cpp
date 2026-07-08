#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll n;
    cin >> n;
    if (n & (n - 1)) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}