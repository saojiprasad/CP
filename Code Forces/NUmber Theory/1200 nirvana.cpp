#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long
ll pro(ll n){
    ll ans=1;
    while(n!=0){
        ans=ans*(n%10);
        n/=10;
    }
    return ans;
}

int main()
{
	ll n;
	cin>>n;
    n++;
	ll ans=1;
	ll p=1;
    ll fun;
    while(n!=0){
        fun=pro(n*p-1);
        ans=max(ans,fun);
        p*=10;
        n/=10;
        
    }
	cout<<ans<<endl;
	
}