#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 != 0) {
            a[i] += a[i] % 10;
        }
    }
 
    if (count(a.begin(), a.end(), a[0]) == n) {
        cout << "YES
";
        return;
    }
 
    for (int i = 0; i < n; i++) {
        if (a[i] % 10 == 0) {
            cout << "NO
";
            return;
        }
    }
 
    for (int i = 0; i < n; i++) {
        while (a[i] % 10 != 2) {
            a[i] += a[i] % 10;
        }
        a[i] %= 20;
    }
 
    if (count(a.begin(), a.end(), a[0]) == n) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}