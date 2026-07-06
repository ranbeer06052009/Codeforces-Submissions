#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int len = 2*n;
        unordered_map<int,int> cnt;
        cnt.reserve(len*2);
        for(int i=0;i<len;++i){
            int x; cin >> x;
            ++cnt[x];
        }
        int odd = 0, even = 0;
        for(auto &p : cnt){
            if(p.second % 2) ++odd;
            else ++even;
        }
        int t = min(even, n);
        if(odd == 0){
            if( (n - t) % 2 == 1 ) --t;
            if(t < 0) t = 0;
        }
        long long ans = odd + 2LL * t;
        cout << ans << '
';
    }
    return 0;
}