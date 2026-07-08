#include <bits/stdc++.h>
using namespace std;
 
bool check(const vector<int>& a, int x) {
    int l = 0, r = (int)a.size() - 1;
    while (l < r) {
        if (a[l] == x) {
            l++;
        } else if (a[r] == x) {
            r--;
        } else if (a[l] != a[r]) {
            return false;
        } else {
            l++;
            r--;
        }
    }
    return true;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int l = 0, r = n - 1;
    while (l < r) {
        if (a[l] != a[r]) {
            if (check(a, a[l]) || check(a, a[r])) {
                cout << "YES
";
            } else {
                cout << "NO
";
            }
            return;
        }
        l++;
        r--;
    }
    cout << "YES
";
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