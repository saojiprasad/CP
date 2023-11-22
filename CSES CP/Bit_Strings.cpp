#include<bits/stdc++.h>
#define ll long long int
using namespace std;
// #define MOD 1e9+7
void solve(){
        ll MOD=1e9+7;
        ll n;
        cin>>n;
        ll ans= pow(2,n) %MOD;
        cout<<ans<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    solve();
    
    return 0;
}