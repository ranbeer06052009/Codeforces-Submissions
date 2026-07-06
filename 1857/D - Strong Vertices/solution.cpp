#include <bits/stdc++.h>
using namespace std;
#define int long long
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
 
void solve() {
    int n;
		cin >> n; 
		vector<int> a(n), b(n), diff(n); 
		int maxDiff = INT_MIN; 
 
		for (int i = 0; i < n; i++) { 
			cin >> a[i];
		}
 
		for (int i = 0; i < n; i++) { 
			cin >> b[i];
			diff[i] = a[i] - b[i]; 
			maxDiff = max(maxDiff, diff[i]); 
		}
 
		vector<int> ans;
		for (int i = 0; i < n; i++) { 
			if (diff[i] == maxDiff) {
				ans.push_back(i + 1); 
			}
		}
 
		cout << ans.size() << endl;
		for (int i = 0; i < ans.size(); i++) { 
			cout << ans[i] << " "; 
		}
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}