#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    int c = count(s.begin(), s.end(), '0');
    
    if (c % 2 == 0 || c == 1) {
        cout << "BOB
";
    } else {
        cout << "ALICE
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