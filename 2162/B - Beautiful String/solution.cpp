#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string p, x;
        
 
        for (char c : s) {
            if (c == '0') {
                p += '0';
            } else {
                x += '1';
            }
        }
    
        cout << p.size() << endl;
  
        for (int i = 0, j = 0; i < s.length(); i++) {
            if (j < p.size() && s[i] == p[j]) {
                cout << i +1  << " ";
                j++;
            }
        }
        cout << endl;
    }
    return 0;
}