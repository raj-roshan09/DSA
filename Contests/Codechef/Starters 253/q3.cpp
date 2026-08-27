#include <bits/stdc++.h>
using namespace std;

int main() {	
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int b = 0;
        int c01 = 0;
        int c10 = 0;
        
        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1])  b++;
            else{
                if(s[i] == '0' && s[i+1] == '1')    c01++;
                else if(s[i] == '1' && s[i+1] == '0')   c10++;
            }
        }
        
        int mx = 0;
        if(c01 >= 2 || c10 >= 2)    mx = 2;
        else if(c01 >= 1 && c10 >= 1)   mx = 1;
        else    mx = 0;
        
        cout << b + mx << endl;
    }
    
}