#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        double maxavg = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
 
 
        for (int l = 0; l < n; l++) {
            double sum = 0;
            for (int r = l; r < n; r++) {
                sum += a[r];
                double avg = sum / (r - l + 1);
                maxavg = max(maxavg, avg);
            }
        }
        
        cout << fixed << setprecision(0) << maxavg << endl;
    }
    return 0;
}