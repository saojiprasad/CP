#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
        }
        else if(b==2){
            cout<<"YES"<<endl;
            cout<<a<<" "<<3*a<<" "<<4*a<<endl;
        }
        else {
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*(b-1)<<" "<<a*b<<endl;
        }
    }
}