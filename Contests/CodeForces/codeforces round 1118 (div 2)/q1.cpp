#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    // fastio;
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int mx = 0;
        vector<int > a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];

            mx = max(mx, a[i]);
            
        }

        if(n == 1)  cout << a[0] << endl;
        else if(n == 2) cout << gcd(a[0], a[1]) << endl;
        else{
            cout << gcd(a[0], mx) << endl;
        }


    }
    return 0;
}