#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    n--; 
    
    if (n == 0) {
        cout << 0 << "
";
        return;
    }
 
    int msb = __lg(n); 
    int highest_power_of_2 = (1 << msb); 
    
    for (int i = highest_power_of_2 - 1; i >= 0; i--) {
        cout << i << " ";
    }
    for (int i = highest_power_of_2; i <= n; i++) {
        cout << i << " ";
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}