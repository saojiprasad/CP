#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        ll n;
        cin>>n;
        ll arr[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans=0;
        for(int i=1;i<n;i+=2){
            ll dif=arr[i]-arr[i-1];
            // cout<<i<<"    ";
            // cout<<dif<<" ";
            ans+=dif;
        }
        cout<<ans<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    solve();
    
    return 0;
}