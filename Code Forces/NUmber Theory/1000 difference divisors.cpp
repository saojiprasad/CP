#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        ll a,b;
        for(ll i=1+x;;i++){
            int cnt=0;
            for(ll j=2;j*j<=i;j++){
                if(i%j==0) cnt++;
            }
            if(cnt==0){
                a=i;
                break;
            }
        }
        for(ll i=a+x;;i++){
            ll cnt=0;
            for(ll j=2;j*j<=i;j++){
                if(i%j==0) cnt++;
            }
            if(cnt==0){
                b=i;
                break;
            }
        }
        cout<<min(a*b,a*b*a)<<endl;
    }
}
