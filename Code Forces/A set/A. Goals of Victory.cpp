#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        long long sum=0;
        for(int i=0;i<n-1;i++){
            cin>>a;
            sum+=a;
        }
        long long ans=0;
        // cout<<sum<<"  ";
        if(sum>0){
            ans=sum-(2*sum);
        }
        else{
             ans=abs(sum);
        }
        cout<<ans<<endl;
    }
}


int main(){
    solve();
}