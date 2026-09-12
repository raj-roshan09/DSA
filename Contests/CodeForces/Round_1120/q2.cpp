#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        if(k<n||k>2*n-1){
            cout<<-1<<'\n';
            continue;
        }

        int b=2*n-k;
        vector<vector<int > > a(n, vector<int >(n));

        for(int i=0; i<b; i++)  a[i][i]=i+1;

        for(int i=b; i<n; i++)  a[i][0]=i+1;

        for(int j=b; j<n; j++) a[b-1][j]=n+j-b+1;

        int cur= 2*n-b+1;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(!a[i][j]) a[i][j]=cur++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << a[i][j] << (j+1 == n ? '\n':' ');
            }
        }
    }
}