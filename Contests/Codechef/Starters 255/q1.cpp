#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    
	    string a;
	    cin >> a;
	    
	    string b;
	    cin >> b;
	    
	    int ca = count(a.begin(), a.end(), 'a');
	    int cb = count(b.begin(), b.end(), 'a');
	    
	    if(ca + cb == n)  cout << "Yes \n";
	    else cout << "No \n";
	}
}
