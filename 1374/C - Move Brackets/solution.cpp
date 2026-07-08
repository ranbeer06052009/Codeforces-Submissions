#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int balance = 0;
    int ops = 0;
    for (char c : s) {
        if (c == ')') {
            balance--;
        } else {
            balance++;
        }
 
        if (balance < 0) {
            ops++;
            balance = 0; 
        }
    }
 
    cout << ops << "
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