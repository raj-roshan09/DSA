#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    int sum = 0;
	    int even = 0;
	    int odd = 0;
	    vector<int > a(n);
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	        
	        sum += a[i];
	        
	        if(a[i]%2==0)   even++;
	        else    odd++;
	    }
	    
	    if(sum % 2 == 0)    cout << sum - odd / 2 << endl;
	    else    cout << odd / 2 << endl;
	    
	}

}
