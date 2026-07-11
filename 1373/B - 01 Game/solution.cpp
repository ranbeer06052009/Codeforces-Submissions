#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int zeros = count(s.begin(), s.end(), '0');
    int ones = s.length() - zeros; 
 
    int operations = min(zeros, ones);
 
    if (operations % 2 != 0) {
        cout << "DA
";
    } else {
        cout << "NET
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