#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        map<int, int> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        
        int mex = 0;
        int max_partitions = n + 1; 
        
        while (true) {
            if (freq[mex] == 0) {
                break;
            }
            max_partitions = min(max_partitions, freq[mex]);
            mex++;
        }
        
        cout << mex << "
";
    }
    
    return 0;
}