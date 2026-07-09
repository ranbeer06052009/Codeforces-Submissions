#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
 
    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            cout << "YES
";
            cout << i + 1 << " " << i + 2 << "
";
            return; 
        }
    }
 
    cout << "NO
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    solve();
    
    return 0;
}