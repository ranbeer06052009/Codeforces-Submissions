#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    int x=0;
    cin >> n;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i][0]=='+'||a[i][a[i].size()-1]=='+'){
            x++;
        }else if(a[i][0]=='-'||a[i][a[i].size()-1]=='-'){
            x--;
        }
    }
    cout << x << endl;
    return 0;
}