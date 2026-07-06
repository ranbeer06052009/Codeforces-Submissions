#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        vector<int> a(n);
        int next_new = 1;
        
        for (int i = 0; i < n; i++) {
            long long prev_b = (i == 0) ? 0 : b[i - 1];
            long long diff = b[i] - prev_b;
 
            
            if (diff == (long long)(i + 1)) {
 
                a[i] = next_new;
                next_new++;
            } else {
 
                a[i] = a[i - diff];
            }
        }
 
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i < n - 1) cout << " ";
        }
        cout << "
";
    }
    
    return 0;
}