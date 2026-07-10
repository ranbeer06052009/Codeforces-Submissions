#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n, k;
    cin >> n >> k;
    
    int total_elements = n * k;
    vector<int> v(total_elements);
    
    for (int i = 0; i < total_elements; i++) {
        cin >> v[i];
    }
 
    ll sum = 0;
    int step = n / 2 + 1;
    int ptr = total_elements;
 
    for (int i = 0; i < k; i++) {
        ptr -= step;
        sum += v[ptr];
    }
 
    cout << sum << "
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