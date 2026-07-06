#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n+1), b(n+1), pos(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;  
        }
        for (int i = 1; i <= n; i++) cin >> b[i];
        
        int m  = n - k;
        int lo = m + 1;  
        int hi = k;      
        
        bool ok = true;
 
        for (int j = 1; j <= m && ok; j++)
            if (b[j] != -1 && b[j] != a[j]) ok = false;
        for (int j = k+1; j <= n && ok; j++)
            if (b[j] != -1 && b[j] != a[j]) ok = false;
       
        if (ok && lo <= hi) {
            set<int> used;
            for (int j = lo; j <= hi && ok; j++) {
                if (b[j] != -1) {
                    int v = b[j];
                    int p = pos[v];  
                    if (p < lo || p > hi)  ok = false;  
                    else if (used.count(v)) ok = false;  
                    else used.insert(v);
                }
            }
        }
        
        cout << (ok ? "YES" : "NO") << "
";
    }
    
    return 0;
}