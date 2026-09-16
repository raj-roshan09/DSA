#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int > a(n);
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        
	    }
	    for(int j=1; j<=n; j++){
    	    for(int i=0; i<n-1; i++){
    	        if(abs(a[i] - a[i+1]) > 1 && a[i] > a[i+1]) swap(a[i], a[i+1]);
    	        
    	    }
	    }
	    
	    for(int i : a)  cout << i << ' ';
	    cout << endl;
	}
}
