#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        // a[0]=0;
        for(int i=0;i<n;i++) cin>>a[i];
        
        for(int i=0;i<(n-k);i++){
            for(int j=i;j<(n-k);j+=k){
            if(a[i]<a[j+k]){
                swap(a[i],a[j+k]);
            }
            }
        }
        ll ans=0;
        for(int i=0;i<k;i++){
            ans+=a[i];
        }
        cout<<ans<<endl;

    }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}