#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,x,d;
        cin>>n>>x>>d;
        int ok=x*5;
        int okay=n/ok;
        int ans=okay+d;
        cout<<ans<<endl;
    }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}   