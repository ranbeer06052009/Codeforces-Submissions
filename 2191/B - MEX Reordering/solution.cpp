#include <bits/stdc++.h>
using namespace std;
 
int findMEX(multiset<int>& s) {
    int mex = 0;
    while (s.count(mex)) {
        mex++;
    }
    return mex;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        sort(a.begin(), a.end());
        
        bool flag = true;
        for (int i = 0; i < n - 1; i++) {
            multiset<int> left(a.begin(), a.begin() + i + 1);
            multiset<int> right(a.begin() + i + 1, a.end());
            
            if (findMEX(left) == findMEX(right)) {
                flag = false;
                break;
            }
        }
        
        if (flag) {
            cout << "YES" << "
";
        } else {
            cout << "NO" << "
";
        }
    }
    return 0;
}