#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        vector<vector<int>>v(n+1,vector<int>(n+1,0));
        for(int i=1;i<n;i++){
            int u,x;
            cin>>u>>x;
            v[u].push_back(x);
            v[x].push_back(u);
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(v[i].size()==3){
                ans++;
            }
        }
        
        cout<<v[1][1]<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}