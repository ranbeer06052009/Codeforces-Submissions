#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long diff=0,add=0;
        int rval=0,lval=0,maxv=0;
        for(int i=0;i<n-1;i++){
            diff+=abs(a[i]-a[i+1]);
        }
        for(int i=1;i<n-1;i++){
            rval=abs(a[i]-a[i+1]);
            lval=abs(a[i]-a[i-1]);
            add=abs(a[i+1]-a[i-1]);
            if(abs(rval+lval-add)>=maxv){
                maxv=abs(rval+lval-add);
            }
        }
        if(abs(a[1]-a[0])>=maxv){
            maxv=abs(a[1]-a[0]);
        }
        if(abs(a[n-1]-a[n-2])>=maxv){
            maxv=abs(a[n-1]-a[n-2]);
        }
        cout<<diff-maxv<<"
";
    }
    return 0;
}