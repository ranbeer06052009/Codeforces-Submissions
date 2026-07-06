// cptemplate.cpp
#include <bits/stdc++.h>
using namespace std;
long long int mod = 998244353;
// #pragma GCC optimize("Ofast,unroll-loops") 
// #pragma GCC target("avx,avx2,avx512,fma") 
//#define int long long
// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    long long int ans = 1; 
		int ansLen = 1; 
		int cur = 1; 
		for (int i = 1; i < n; i++) { // O(n)
			if (s[i] != s[i - 1]) {
				ansLen++; 
				ans = (ans * cur) % mod; 
				cur = 1;
			} else {
				cur++; 
			}
		}
		ans = (ans * cur) % mod; 
		for (int i = 1; i <= n - ansLen; i++) { // O(n)
			ans = (ans * i) % mod;
		}
		cout << n - ansLen << " " << ans ;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout<<"
";
    }
}