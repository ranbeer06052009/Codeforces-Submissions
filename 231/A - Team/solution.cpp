#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int problem_solved = 0;
    for(int i=0;i<n;i++){
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        if(petya + vasya + tonya >= 2) problem_solved++;
    }
    cout << problem_solved << endl;
    return 0;
}