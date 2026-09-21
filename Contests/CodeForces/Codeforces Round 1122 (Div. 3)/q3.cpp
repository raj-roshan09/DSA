#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int p = -1;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                p = i ;
                break;
            }
            
        }
        
        if(p == -1){
            cout << 0 << endl;
            continue;
        }
        if(s[0] == '1'){
            int cnt = 0;
            for(int i=1; i<n; i++){
                if(s[i] == '0') cnt++;
            }
            cout << cnt << endl;
            continue;
        }
        
        vector<int > one(n+1, 0);
        vector<int > zero(n+2, 0);
        
        for(int i=1; i<n+1; i++){
            if(s[i] == '1') one[i] = one[i-1] + 1;
            else    one[i] = one[i-1];
        }
        for(int i=n; i>=1; i--){
            if(s[i] == '0') zero[i] = zero[i+1] + 1;
            else    zero[i] = zero[i+1];
        }
            
        int ans = n-1;
        for(int i=p-1; i<=n; i++){
            int op = one[i] + zero[i+1];
            
            ans = min(ans, op);
        }
        
        cout << ans << endl;
    }
}
