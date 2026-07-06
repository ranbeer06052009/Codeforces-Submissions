#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    
    int numOdds = 0;
    for (int i = 0; i < n; i++) {
        ll val;
        cin >> val;
        if (val % 2 != 0) {
            numOdds++;
        }
    }
 
    if ((x % 2 + numOdds % 2) % 2 == y % 2) {
        cout << "Alice
";
    } else {
        cout << "Bob
";
    }
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