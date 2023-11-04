#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ans=1e18;
        ll count=0;

        for(int i=0;i*i<=a;i++){
            if(b==1&&i==0){
                continue;
            }
            count=i;
            ll c=a;
            while(c){
                c/=(b+i);
                count++;
            }
            ans=min(ans,count);
        }
            cout<<ans<<endl;

    }
}

int main(){
    solve();
}