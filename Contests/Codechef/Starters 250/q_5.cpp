#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        
        long long s = 0;
        long long md = 0;
        long long p = v[0];
        
        for (int i = 1; i < n; i++) {
            long long cur = max(v[i], p + 1);
            s += (cur - v[i]);
            md = max(md, cur - v[i]);
            p = cur;
        }
        
        cout << max(md, (s + k - 1) / k) << "\n";
    }
    
    return 0;
}