#include <bits/stdc++.h>
using namespace std;
 
struct Fenwick {
    int n;
    vector<int> bit;
    Fenwick(int n=0){init(n);}
    void init(int _n){ n=_n; bit.assign(n+1,0); }
    void add(int idx,int val){ for(; idx<=n; idx+=idx&-idx) bit[idx]+=val; }
    int sumPrefix(int idx){ int s=0; for(; idx>0; idx-=idx&-idx) s+=bit[idx]; return s; }
    
    int find_kth(int k){
        int pos = 0;
        int LOG = 1;
        while((1<<LOG) <= n) LOG++;
        for(int pw = 1<<(LOG-1); pw>0; pw >>= 1){
            if(pos+pw <= n && bit[pos+pw] < k){
                k -= bit[pos+pw];
                pos += pw;
            }
        }
        return pos+1;
    }
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int MAXA = 200000; 
    static vector<vector<int>> divisors;
    divisors.assign(MAXA+1, {});
    
    for(int d=1; d<=MAXA; ++d){
        for(int m=d; m<=MAXA; m += d){
            divisors[m].push_back(d);
        }
    }
 
    int T; 
    if(!(cin >> T)) return 0;
    while(T--){
        int n; cin >> n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin >> a[i];
 
       
        vector<int> cnt(n+1, 0);
        
        vector<int> freq(n+1, 0);
 
        
        Fenwick bit(n+1);
       
        freq[0] = n;
        bit.add(1, 1); 
 
        vector<int> ans(n+1, 0);
 
        for(int i=1; i<=n; ++i){
            
            for(int d: divisors[a[i]]){
                if(d > n) continue; 
                int old = cnt[d];
                int nw = old + 1;
                cnt[d] = nw;
 
              
                freq[old]--;
                if(freq[old] == 0){
                    
                    bit.add(old+1, -1);
                }
                
                freq[nw]++;
                if(freq[nw] == 1){
                    
                    bit.add(nw+1, +1);
                }
            }
 
            
            int uptoIndex = i; 
            int total = bit.sumPrefix(uptoIndex);
            if(total == 0){
                ans[i] = 0;
            } else {
                int pos = bit.find_kth(total); 
                ans[i] = pos - 1; 
            }
        }
 
        for(int i=1;i<=n;i++){
            if(i>1) cout << ' ';
            cout << ans[i];
        }
        cout << '
';
    }
    return 0;
}