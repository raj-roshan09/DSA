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
	        
	        a[i] -= i;
	    }
	    
	    sort(a.begin(), a.end());
	    
	    int m = 1, c = 1;
	    for(int i=1; i<n; i++){
	        if(a[i] == a[i-1])  c++;
	        else    c = 1;
	        
	        m = max(m, c);
	    }
	    
	    cout << n-m << endl;
	}
}
