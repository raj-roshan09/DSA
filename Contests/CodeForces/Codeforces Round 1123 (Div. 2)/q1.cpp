#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        char c;
        cin >> c;
        
        string s;
        cin >> s;
        
        int ans = 0;
        for(int i=0; i<n/2; i++){
            if(s[i] != s[n-1-i]){
                if(s[i] == c || s[n-1-i] == c)  ans += 1;
                else ans += 2;
            }
        }
        
        cout << ans << endl;
    }
}

