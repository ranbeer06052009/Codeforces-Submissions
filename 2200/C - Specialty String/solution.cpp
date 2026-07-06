#include <bits/stdc++.h>
using namespace std;
#define int long long
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
    if(n==1){
        if(s[0]=='*')cout<<"YES";
        else cout<<"NO";
        return;
    }
    stack<char> st;
    for(char c:s){
        if(!st.empty()&&st.top()==c)st.pop();
        else st.push(c);
    }
    if(st.empty()) cout<<"YES";
    else cout<<"NO";
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