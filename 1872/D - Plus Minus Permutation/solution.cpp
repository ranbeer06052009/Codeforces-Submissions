#include <bits/stdc++.h>
 
using namespace std;
 
long long lcm(long long num1, long long num2) {
    return (num1 * num2) / (__gcd(num1, num2));
}
 
long long calculateSum(long long start, long long end) {
    if (start > end) return 0;
    return ((start + end) * (end - start + 1)) / 2;
}
 
void solve() {
    long long n, x, y;
    cin >> n >> x >> y;
 
    long long common_lcm = lcm(x, y);
    long long count1 = (n / x) - (n / common_lcm);
    long long count2 = (n / y) - (n / common_lcm);
 
    long long ans = calculateSum(n - count1 + 1, n) - calculateSum(1LL, count2);
    cout << ans << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}