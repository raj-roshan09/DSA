#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int > a(n);
	    
	    int even = 0, odd = 0;
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        
	        if(a[i]%2 == 0) even++;
	        else    odd++;
	    }
	    
	    if(odd == even) cout << n << endl;
	    else if(odd > even) cout << 2*even + 1 << endl;
	    else    cout << 2*odd + 1 << endl;
	}

}
