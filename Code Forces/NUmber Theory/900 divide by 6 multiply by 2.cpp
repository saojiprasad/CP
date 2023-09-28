#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll power2=0,power3=0;
        while(n%2==0){
            power2++;
            n/=2;
        }
        while(n%3==0){
            power3++;
            n/=3;
        }
        if(n>1|| power2>power3){
            cout<<"-1"<<endl;
        }
        else{
            cout<<((power3-power2)+power3)<<endl;
        }
    }
}