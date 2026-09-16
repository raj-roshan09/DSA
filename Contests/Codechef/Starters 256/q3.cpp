#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<long long > a(n);
	    
	    long long sum = 0;
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        
	        sum += a[i];
	        
	    }
	    
	    long long r = 0, b = sum;
	    sort(a.begin(), a.end());
	    
	    long long ans = 0;
	    for(int i=n-1; i>=1; i--){
	        r += a[i];
	        b -= a[i];
	        ans = max((1LL*(n-i))*b + r*(1LL*i) , ans);
	    }
	    
	    cout << ans << endl;
	    
	}

}
