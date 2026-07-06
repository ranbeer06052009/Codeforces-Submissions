#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    ll n;
    if (cin >> n) {
        ll k = n / 2;
        ll ans = 0;
 
        if (n % 2 == 0) {
            ans = (k + 1) * (k + 1);
        } else {
            ans = 2LL * (k + 1) * (k + 2);
        }
 
        cout << ans << "
";
    }
 
    return 0;
}