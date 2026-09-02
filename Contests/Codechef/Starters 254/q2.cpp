#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    vector<int > a(n);
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
	    
	    int rem = n-k;
	    int curr = 0;
	    for(int i=0; i<rem; i++)    curr += a[i];
	    
	    int mx = curr;
	    
	    for(int i=rem; i<n; i++){
	        curr += a[i] - a[i-rem];
	        mx= max(mx, curr);
	        
	    }
	    cout << mx << endl;
	}

}
