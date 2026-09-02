#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    long long ans = 0;
	    long long prev = 0;
	    for(int i=0; i<n; i++){
	        long long x;
	        cin >> x;
	        
	        if((i+1)%2 == 1) x =x;
	        else    x = -x;
	        
	        if(x-prev > 0)  ans += (x-prev);
	        prev = x;
	        
	        
	    }
	    if(prev < 0)   ans -= prev;
	    
	    cout << ans << endl;
	    
	}

}
