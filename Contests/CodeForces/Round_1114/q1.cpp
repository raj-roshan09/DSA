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
        vector<int > a(3);
        for(int i=0; i<3; i++)  cin >> a[i];

        sort(a.begin(), a.end());
        cout << min(a[1]-a[0], a[2]-a[1]) << endl;
    }
    return 0;
}