#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=max({a,b,c});
    if(maxi==a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}