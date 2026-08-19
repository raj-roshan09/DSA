#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, m, x;
	    cin >> n >> m >> x;
	    
	    int row = 1 + (x-1)/m;
	    
	    
	    cout << min(row, n-row+1) << endl;
	}

}
