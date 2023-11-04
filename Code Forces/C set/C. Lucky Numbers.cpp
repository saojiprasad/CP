#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"2"<<endl;
    }
    long long ans=2;
    if(n>1){
        for(int i=1;i<n;i++){
            ans=(ans*2)+2;
        }
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