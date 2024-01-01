#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        ll n;
        cin>>n;
        ll a[n];
        // ll sum=0;
        for(ll i=0;i<n;i++)cin>>a[i];

        bool flag=false;
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=a[i];
            if(sum<0){
                cout<<"No"<<endl;
                return;
            }
            if(flag){
                if(a[i]!=0){
                cout<<"No"<<endl;
                return;
                }
            }
            if(sum==0){
                flag=true;
            }
            
            
        }
        //if a1 is negative then false
        //if a1==0 then all rem should be zero
        if(sum==0)
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}