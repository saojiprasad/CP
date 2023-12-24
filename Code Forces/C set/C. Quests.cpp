#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n,k;
        cin>>n>>k;
        int a1[n],a2[n];
        for(int i=0;i<n;i++) cin>>a1[i];
        for(int i=0;i<n;i++) cin>>a2[i];
        int i=0,j=0;
        int ans=0;
        int maxi=0;
        int temp=0;
        for(int i=0;i<n;i++){
            if(i==k) break;

            temp+=a1[i];

            maxi=max(maxi,a2[i]);

            ans=max((temp+(k-i-1)*maxi),ans);
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