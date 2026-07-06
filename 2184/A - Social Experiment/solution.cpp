#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=0;
        if(n==2) ans=2;
        if(n==3) ans=3;
        if(n%2==0&&n!=2)ans=0;
        if(n%2==1&&n!=3) ans=1;
        
        cout<<ans<<"
";
    }
    return 0;
}