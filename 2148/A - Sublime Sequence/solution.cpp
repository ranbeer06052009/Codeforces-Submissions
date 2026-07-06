#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,n;
        cin >> x >> n;
        if(n%2==0){
            cout << 0 << '
';
            continue;
        }
        else cout << x << '
';
    }
    
    return 0;
}