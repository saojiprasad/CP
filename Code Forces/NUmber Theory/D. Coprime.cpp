#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(1001,-1);
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            v[temp]=i;
        }
        int ans=-1;
        for(int i=1;i<1001;i++){
            int ok=-1;
            for(int j=1;j<1001;j++){
                ok=__gcd(i,j);
                if(ok==1 && v[i] >0&& v[j]>0){
                    ans=max(ans,v[i]+v[j]);
                }
            }
        }
        cout<<ans<<endl;
    }
}
    
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    solve();
    return 0;
}