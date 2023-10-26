#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ans=n-2;
    if(n<2){
        cout<<0<<endl;
    }
    else{
        cout<<(ans/7)+1<<endl;
    }
    }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}