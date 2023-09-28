#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int  main(){
    ll n,d;
    cin>>n>>d;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll count=2;
    for(ll i=1;i<n;i++){
        ll temp=arr[i]-arr[i-1];
        if(temp==2*d) count++;
        if(temp>2*d)  count+=2;
    }
    cout<<count<<endl;

}