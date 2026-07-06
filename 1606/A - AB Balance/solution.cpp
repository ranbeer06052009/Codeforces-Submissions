#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    
    if (s.front() != s.back()) {
        s[0] = (s[0] == 'a') ? 'b' : 'a';
    }
    
    cout << s << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}