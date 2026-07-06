#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <string> a(n);
        for(int i=0; i<n; i++){
              cin>>a[i];
        }
        string s="";
        for(int i=0; i<n; i++){
            string left= a[i]+s;
            string right= s+a[i];
            s=min(left,right);
        }
        cout<<s<<"
";
    }
    return 0;
}