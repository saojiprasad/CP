#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n,k;
        cin>>n>>k;
        
        int j=n;
        for(int i=1;i<=n;i++){
            if(i<=k){
                cout<<i<<" ";
            }else{
                cout<<j<<' ';
                j--;
            }
            
        }
        cout<<endl;
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