#include <bits/stdc++.h>
using namespace std;
 
long long merge_and_count(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left, j = mid + 1;
    long long inv = 0;
 
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            inv += (mid - i + 1); 
        }
    }
 
    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= right) temp.push_back(arr[j++]);
    for (int k = left; k <= right; k++) {
        arr[k] = temp[k - left];
    }
 
    return inv;
}
 
long long merge_sort(vector<int>& arr, int left, int right) {
    if (left >= right) return 0;
 
    int mid = (left + right) / 2;
    long long inv = 0;
 
    inv += merge_sort(arr, left, mid);
    inv += merge_sort(arr, mid + 1, right);
    inv += merge_and_count(arr, left, mid, right);
 
    return inv;
}
void solve(){
    int n;
    cin >> n;
 
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
    }
    sort(vec.begin(), vec.end());
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        b[i] = vec[i].second;
    }
    long long ans = merge_sort(b, 0, n - 1);
 
    cout << ans;
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