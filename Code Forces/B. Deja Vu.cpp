#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<q;i++){
            cin>>b[i];
        }
        vector<int> unique_b;
        for (ll i = 0; i < q; i++) {
            if (find(unique_b.begin(), unique_b.end(), b[i]) == unique_b.end()) {
                unique_b.push_back(b[i]);
            }
        }
        for(ll i=0;i<unique_b.size();i++){
            ll dou=(1LL<<unique_b[i]);
            for(ll j=0;j<n;j++){
                if(a[j]%dou==0){
                    // ll add=pow(2,b[i]-1);
                    ll add=(1LL<<(unique_b[i]-1));
                    a[j]+=add;
                }
            }
        }
        for(ll i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}