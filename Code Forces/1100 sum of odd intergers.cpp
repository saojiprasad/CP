#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long ans=k*k*1ll;
        
        if((n%2==1&&k%2==0)|| (n%2==0&&k%2==1)){
            cout<<"NO"<<endl;
        }
        else{
            if(ans<=n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}