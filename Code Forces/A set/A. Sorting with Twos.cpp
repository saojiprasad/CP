#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans=1;
        for(int i=1;i<n;i++){
            int ok;
            cin>>ok;
            if(m>ok){
            if(((i-1)&(i))!=0) 
            ans=0;
            }
            m=ok;
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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