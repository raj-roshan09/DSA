#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    if(n%3 == 0)    cout << 0 << endl;
	    else{
	        int rem = 3 - (n%3);
	        
	        int fv = 0;
	        for(int i=0; i<2; i++){
	            n = (1 + n/5)*5;
	            fv++;
	            if(n%3 == 0)    break;
	        }
	        
	        cout << min(fv, rem) << endl;
	    }
	}

}
