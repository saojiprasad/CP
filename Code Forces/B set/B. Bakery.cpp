#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n,m,k;
        cin>>n>>m>>k;
        vector<vector<int>>graph;

        for(int i=0;i<m;i++){
            int u,v,w;
            cin>>u>>v>>w;
            graph.push_back({u,v,w});
        }
        
        vector<int>cap;
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            cap.push_back(x);
        }
        int ans=-1;
        int maxi=INT32_MAX;
        for(auto i : graph){
            for(auto j : cap){
                // cout<<"first"<<endl;
                if(i[0]==j||i[1]==j){
                    // for(auto k : cap){
                    //     if(i[1]!=k){
                            ans=i[2];
                            maxi=min(maxi,ans);
                        // }
                    // }
                }
                
            }
        }
        maxi=min(maxi,ans);
        cout<<maxi<<endl;
        // for(auto i : graph){
        //     cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<' '<<endl;
        // }

}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}