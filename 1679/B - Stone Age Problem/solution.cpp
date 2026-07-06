#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n, q;
    if (!(cin >> n >> q)) return 0;
 
    vector<int> val(n), t(n, 0);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> val[i];
        sum += val[i];
    }
 
    int global_val = 0, global_t = -1;
 
    for (int it = 1; it <= q; it++) {
        int type; cin >> type;
        
        if (type == 1) {
            int ind, x; cin >> ind >> x;
            ind--;
            
            if (t[ind] > global_t) {
                sum += (x - val[ind]);
            } else {
                sum += (x - global_val);
            }
            
            val[ind] = x;
            t[ind] = it;
        } else {
            int x; cin >> x;
            global_val = x;
            global_t = it;
            sum = 1LL * x * n;
        }
        
        cout << sum << "
";
    }
 
    return 0;
}