#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, p, q, r;
	    cin >> a >> b >> p >> q >> r;
	    
	 
	    int mn = min(a,b);
	    int ans = INT_MAX;
	    for(int i=0; i<=mn; i++){
	        ans = min(ans, i*r + ((a-i+1)/2)*p + ((b-i+1)/2)*q);
	    }
	    
	    cout << ans << endl;
	    
	}

}
