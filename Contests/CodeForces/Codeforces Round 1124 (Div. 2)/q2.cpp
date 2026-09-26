#include <bits/stdc++.h>
using namespace std;

int next(int n){
    int sum = 0;
    while(n > 0){
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        
        map<int, int > freq;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            
            for (int i=0; i<200; i++)  x = next(x);
            
            freq[x]++;
        }
            
        long long ans = 0;
        for(auto const& [val, count] : freq)    ans += 1LL * count * (count - 1) / 2;
            
        cout << ans << endl;
    }
}
