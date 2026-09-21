#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        long long diff = abs(a - b);
        
        if(a >= b) cout << diff + c << endl;
        else    cout << max(diff, c - diff) << endl;
    }
}