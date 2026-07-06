#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long t;
    cin>>t;
    while(t--){
        int l,a,b;
        cin >> l>>a>>b;
        
        int g = gcd(l, b);
 
        int  ans = a + ((l - 1 - a) / g) * g;
        
        cout << ans << '
';
    }
    return 0;
}