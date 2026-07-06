#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
void solve() {
    int n;
    cin >> n ;
    string s;
    cin>>s;
    int lz=0,bz;
    vector<int> a;
    int flag=true;
    int cnt1=0;
    for( int i=0; i<s.size();i++){
        if(s[i]=='0'&&flag)lz++;
        if(s[i]=='1'){
            a.push_back(i);
            cnt1++;
            flag=false;
        }
    }
    int minstd=0;
    if(!flag){
    for(int i=0; i<a.size()-1;i++){
        minstd+=(a[i+1]-a[i]-1)/3;
    }
    }
    if(!flag){
        int bz=n-1-a[a.size()-1];
        if(bz>1){
            if(bz%3==2 )minstd+=bz/3+1;
            else minstd+=bz/3;
        }
        if(lz%3==2 )minstd+=lz/3+1;
        else minstd+=lz/3;
    }
    else{
        if(lz%3==0 )minstd+=lz/3;
        else minstd+=lz/3+1;
    }
    cout<<minstd+cnt1;
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}