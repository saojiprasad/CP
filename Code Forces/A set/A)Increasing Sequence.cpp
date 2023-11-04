#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=1;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            if(x==ans){
                ans++;
            }
            ans++;
        }
        
    cout<<ans-1<<endl;
    }
}

int main(){
    solve();
}