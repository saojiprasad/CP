#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x,h,m;
    cin>>x>>h>>m;
    int ans=m;
    int anss=0;
    bool okay=false;
    int count=0;
    int rem=m%x;
    if(m%7==0){
        cout<<"0"<<endl;
        return;
    }
    while(1)
    {
        ans-=x;
        if(ans/10==7&&ans!=0){
            cout<<count<<endl;
            return;
        }
        if(ans<0){
            ans=60+ans;
        }
        count++;
        

    }
}

int main(){
    solve();
}
