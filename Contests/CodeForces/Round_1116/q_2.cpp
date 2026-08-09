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

        string s;
        cin >> s;

        int even = 0;
        bool ok1 = true;
        bool ok2 = true;
        for(int i=0; i<n; i+=2){
            int pos = i/2;
            char guess1 = (pos % 2 == 0) ? '0' : '1';
            char guess2 = (pos % 2 == 0) ? '1' : '0';
            if(s[i] != '?' && s[i] != guess1)    ok1 = false;
            if(s[i] != '?' && s[i] != guess2)    ok2 = false;
        }
        if(ok1) even++;
        if(ok2) even++;

        int odd = 0;
        ok1 = true;
        ok2 = true;
        for(int i=1; i<n; i+=2){
            int pos = (i-1)/2;
            char guess1 = (pos % 2 == 0) ? '0' : '1';
            char guess2 = (pos % 2 == 0) ? '1' : '0';
            if(s[i] != '?' && s[i] != guess1)   ok1 = false;
            if(s[i] != '?' && s[i] != guess2)   ok2 = false;
        }
        if(ok1)    odd++;
        if(ok2)    odd++;

        cout << even * odd << endl;
    }
    return 0;
}