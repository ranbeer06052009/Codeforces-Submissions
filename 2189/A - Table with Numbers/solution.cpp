#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n,h,l;
        cin >> n>>h>>l;
        int a = min(h, l);
        int b = max(h, l);
 
        int c1 = 0, c2 = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= a) c1++;
            else if (x <= b) c2++;
        }
        int ans=min(c1,c2)+(c1-min(c1,c2))/2;
        cout<<ans<<"
";
    }   
    return 0;
}