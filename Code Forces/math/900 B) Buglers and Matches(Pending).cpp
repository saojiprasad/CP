#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool comp(pair<ll,ll>a,pair<ll,ll>b){
    // if(a.first<b.first)
    //     return a.first<b.second;
    //  if (a.first != b.first) {
    //     return a.first > b.first;
    // }
    return a.second > b.second;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>p;
    for(ll i=0;i<m;i++){
        ll x, y;
        cin >> x >> y;
        p.push_back({x, y});
    }
    sort(p.begin(),p.end(),comp);
    // for(auto i:p){
    //     cout<<i.first<<" "<<i.second<<" ";
    // }
    ll sum=0;
    ll match=0;
    ll num=1 ;
    for(auto i:p){
        if(match<n){
        match+=i.first;
        if(match<=n){
            sum+=(i.second*i.first);
            num=n-match;
        }
        else{
            
            sum+=(num*i.second);
        }
        }
        // cout<<match<<endl;
        // cout<<num<<endl;
        
    }

    cout<<sum<<endl;
    

}

int main(){
    solve();
}