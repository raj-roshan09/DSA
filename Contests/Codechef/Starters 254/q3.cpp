#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int f[32] = {0};
        int ans = 0;
        for(int i=0; i<n; i++){
            int v;
            cin >> v;
            
            int b = 31 - __builtin_clz(v);
            f[b]++;
            if(f[b] > ans)   ans = f[b];
        }
        
        cout << ans << endl;
    }
}
