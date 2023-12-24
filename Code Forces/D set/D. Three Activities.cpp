#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;

        int a1[n],a2[n],a3[n];
        for(int i=0;i<n;i++) cin>>a1[i];
        for(int i=0;i<n;i++) cin>>a2[i];
        for(int i=0;i<n;i++) cin>>a3[i];
        
        vector<pair<int,int>>v1,v2,v3;


        pair<int,int>a,b,c;

        for(int i=0;i<n;i++){
            v1.push_back({a1[i],i});
            v2.push_back({a2[i],i});
            v3.push_back({a3[i],i});
        }
        sort(v1.begin(), v1.end(), greater<pair<int, int>>());
        sort(v2.begin(), v2.end(), greater<pair<int, int>>());
        sort(v3.begin(), v3.end(), greater<pair<int, int>>());
        int ans=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++)
                if(v1[i].second!=v2[j].second&&v2[j].second!=v3[k].second&&v1[i].second!=v3[k].second){
                    ans=max(ans,v1[i].first+v2[j].first+v3[k].first);
                }
            }
        }
        cout<<ans<<endl;
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