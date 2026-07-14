#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int c3 = 0, c2 = 0;
 
    while (n % 3 == 0) {
        c3++;
        n /= 3;
    }
 
    while (n % 2 == 0) {
        c2++;
        n /= 2;
    }
 
    if (n > 1 || c2 > c3) {
        cout << -1 << "
";
    } else {
        cout << (2 * c3 - c2) << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}