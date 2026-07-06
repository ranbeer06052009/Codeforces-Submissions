#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, y, r;
        cin>>n;
        cin>> y >>r;
        cout<<r+min(n-r,y/2)<< endl;
    }
    return 0;
}