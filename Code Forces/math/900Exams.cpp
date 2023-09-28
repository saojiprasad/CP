#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    int ans=(n*3)-k;

    if(ans>=k|| n*3<=k){
        cout<<"0"<<endl;
    }
    else{
    cout<<ans<<endl;
    }
}

int main(){
    solve();
}
