#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    vector<int > c(n);
	    for(int i=0; i<n; i++){
	        cin >> c[i];
	    }
	    int ans = INT_MAX;
	    for(int i=0; i<n; i++){
	        for(int j=i+1; j<n; j++){
	            if (i <= k && j >= n-1-k && j-i <= 2*k+1){
	                ans = min(ans, c[i] + c[j]);
	            } 
	        }
	    }
	    if(ans == INT_MAX)  cout << -1 << endl;
	    else    cout << ans << endl;
    }

}
