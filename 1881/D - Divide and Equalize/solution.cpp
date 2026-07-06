#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// double power(double mid, int n) {
//     double ans = 1.0;
//     for (int i = 0; i < n; i++) {
//         ans *= mid;
//     }
//     return ans;
// }
 
// // Function to find nth root using binary search
// double nthRoot(double m, int n, double precision = 1e-9) {
//     if (n <= 0) {
//         throw invalid_argument("Root degree must be positive.");
//     }
//     if (m < 0 && n % 2 == 0) {
//         throw invalid_argument("Even root of a negative number is not real.");
//     }
//     if (m == 0) return 0;
//     if (m == 1) return 1;
 
//     double low, high;
//     if (m < 1) { // For fractional numbers
//         low = m;
//         high = 1;
//     } else {
//         low = 1;
//         high = m;
//     }
 
//     while ((high - low) > precision) {
//         double mid = (low + high) / 2.0;
//         double midPow = power(mid, n);
 
//         if (midPow > m) {
//             high = mid;
//         } else {
//             low = mid;
//         }
//     }
//     return (low + high) / 2.0;
// }
 
int solve(){
    int n;
		cin >> n; 
		vector<int> a(n); 
		for (int i = 0; i < n; i++)
			cin >> a[i]; 
 
		map<int, int> mp; 
		for (int i = 0; i < n; i++) {
			for (int j = 2; j * j <= a[i]; j++) { 
				while (a[i] % j == 0) { 
					mp[j]++; 
					a[i] /= j; 
				}
			}
			if (a[i] > 1) {
				mp[a[i]]++;
			}
		}
 
		int flag = 1; 
		for (auto it : mp) { 
			if (it.second % n != 0) {
				flag = 0; 
				break;
			}
		}
 
		if (flag) {
			cout << "YES" << endl; 
		} else {
			cout << "NO" << endl; 
		}
 
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}