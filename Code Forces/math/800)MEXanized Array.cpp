#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;

        ll sum=0;
        ll rem=n-k;
        if(k>(x+1)|| n<k){
            cout<<"-1"<<endl;
        }
        else{
        for(int i=0;i<k;i++){
            sum+=i;
        }
        if(x==k){
           sum+=(rem*(x-1));
        }
        else{
        sum+=(rem*x);
        }
        cout<<sum<<endl;
    }
    }
}



int main(){
    solve();
}