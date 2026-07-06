#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        long long x;
        cin >> k >> x;
 
        long long v = x;
        for (int i = 0; i < k; i++) {
            if ((v - 1) % 3 == 0) {
                long long temp= (v - 1) / 3;
                if (temp % 2 == 1) {
                    v = temp;
                    continue;
                }
            }
            v = v * 2;
        }
        cout << v << "
";
    }
    return 0;
}