#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    
    ll x,y;
    cin>>x>>y;
    ll a=min(x,y);
    if(x>y&&x-y>=2){
        cout<<"CHEF"<<endl;
        return;
    }
    if(y>x&&y-x>=2){
        cout<<"CHEFINA"<<endl;
        return;
    }
    if(a%2==1){
        cout<<"CHEF"<<endl;
        return;
    }
    if(a%2==0){
        cout<<"CHEFINA"<<endl;
        return;
    }
    
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}