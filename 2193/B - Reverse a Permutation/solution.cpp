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
    cin >> n ;
    vector<int> p(n+1,0);
    vector<int> ans(n+1,0);
    for (int i = 1; i <=n; i++) {
        cin >> p[i] ;
    }
    int l=1, r=n;
    int flag=0;
    for(int i=1; i<=n; i++){
        if(p[i]==n - i + 1){
            continue;
        }
        else{
            //find position of n-i+1
            flag=1;
            l=i;
            for(int j=i+1; j<=n; j++){
                if(p[j]==n - i + 1){
                    r=j;
                    break;
                }
            }
            break;
        }
    }
    for(int i=1; i<=n; i++){
        ans[i]=p[i];
    }
    if(flag)reverseArray(ans.data(), l, r);
    for(int i=1; i<=n; i++){
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