#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n;
    cin>> n;
 
    if (n < 4 || n % 2 == 1) {
        cout << -1;
    } else {
        long long mn = (n + 5) / 6;
        long long mx = n / 4;
        cout << mn << " " << mx;
    }
    return;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout<<'
';
    } 
    return 0;
}