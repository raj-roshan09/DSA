
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        map<int, int > mp;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            
            mp[x]++;
        }

        vector<int > ans;
        while(!mp.empty()){
            vector<int > temp;
            for(auto i = mp.rbegin(); i != mp.rend(); i++){
                ans.push_back(i->first);
                temp.push_back(i->first);
            }
            for(int t : temp){
                mp[t]--;
                if(mp[t] == 0)  mp.erase(t);
            }
        }
                
        for(int i=0; i<n; i++){
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
}