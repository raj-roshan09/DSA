#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, m, k;
	    cin >> n >> m >> k;
	    
	    vector<bool > u(n+1, false);
	    for(int i=0; i<m; i++){
	        int x;
	        cin >> x;
            
	        u[x] = true; 
	    }
	    
	    int c = 0;
	    for(int i=1; i<=n && c<k; i++){
	        if(!u[i]){
	            cout << i << " ";
				
	            c++;
	        }
	    }
	    
	    cout << endl;
	}
}
