#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,r,b;
    cin >>n>> r>> b;
    int q = r/(b+1),rem= r % (b + 1);
    for(int i= 0; i<= b; i++){
        for(int j = 0; j < q + (i < rem); j++) cout << "R";
        if(i < b) cout << "B";
    }
    cout << "
";
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}