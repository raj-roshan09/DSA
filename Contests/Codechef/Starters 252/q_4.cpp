#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int > c(n+2, 0);
        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            if(a <= n)  c[a]++;
        }
            
        vector<long long > p2(n+2, 1);
        for(int i=1; i<=n; i++) p2[i] = (p2[i-1] * 2) % mod;
            
        vector<long long > p(n+2, 1);
        long long cur = 1;
        for(int i=0; i<=n; i++){
            cur = (cur * (p2[c[i]] - 1 + mod)) % mod;
            p[i] = cur;
        }
            
        long long ans = 0;
            
        for(int i=0; i<=n; i++) ans = (ans + p[i]) % mod;
            
        for(int i=1; i<=n; i++){
            long long w = (p2[c[i]] - 1 + mod) % mod;
            long long pr = (i >= 2) ? p[i - 2] : 1;
            ans = (ans + pr * w) % mod;
        }
            
        cout << ans << endl;
        
	}

}
