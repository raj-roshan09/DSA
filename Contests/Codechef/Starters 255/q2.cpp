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
	    
	    map<int, int> f;
	    
	    for(int i=0; i<n; i++)  f[a[i]]++;
	    
	    int mx = 0;
	    for(auto el : f) mx = max(mx, el.second);
	    
	    cout << (mx+1) / 2 << endl;
	}

}
