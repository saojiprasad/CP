#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    ll mini=INT_MAX;
    bool okay=true;
    
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mini=min(mini,arr[i]);
    }
    for(auto i:arr){
        if((i-mini)%k!=0){
            okay=false;
        }
    }
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    ll ans=0;
    
    if(okay){
        for(auto i:arr){
            ans+=i-mini;
        }
        cout<<ans/k<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}

int main(){
    solve();
}
