#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
 
	int ans = 0; 
	int x = INT_MAX, y = INT_MAX; 
 
	for (int i = 0; i < n; i++) {
		if (x > y) {
			swap(x, y); 
		}
		if (a[i] <= x) {
			x = a[i]; 
		} else if (a[i] <= y) {
			y = a[i]; 
		} else {
			x = a[i];
			ans++;
		}
	}
 
	cout << ans << '
';
}
 
int main() {
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
 
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}