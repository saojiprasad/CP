#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }   
        for(int i=1;i<n;i++){
            if(v[i-1]<v[i]){       
            }
        }
    }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}