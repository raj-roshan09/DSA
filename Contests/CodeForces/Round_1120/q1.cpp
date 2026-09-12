#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int cnt = 0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            cnt += x;
        }

        if(cnt >= (n+1)/2)  cout << "Bessie" << endl;
        else    cout << "Elsie" << endl;
    }
}
