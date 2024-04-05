#include<bits/stdc++.h>
#define ll long long
using namespace std;
// #define MOD 1e9+7
void solve(){
        ll MOD=1e9+7;
        ll n;
        cin>>n;
        ll ans=1;
        
        for(int i=1;i<=n;i++){
            ans=(ans*2)%MOD;
        }

        cout<<ans<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    solve();
    
    return 0;
}