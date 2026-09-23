#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    int ans = n;
	    while(k <= n && n != 0){
	        n = n- k + 1;
	        ans++;
	    }
	    cout << ans << endl;
	}

}
