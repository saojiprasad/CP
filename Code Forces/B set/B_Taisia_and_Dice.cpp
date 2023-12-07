#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n,s,r;
        cin>>n>>s>>r;
        int dif=s-r;
        cout<<dif<<" ";
        
        for(int i=0;i<n-1;i++){
            
            // while(r-dif<n-i-1){
            //     dif--;
            // }
            // cout<<dif<<" ";
            // r=r-dif;
            for(int j=dif;j>0;j--){
                if(r-dif+1>=n-i-1){
                    cout<<dif<<" ";
                    r=r-dif;
                    break;
                }
                
                dif--;
            }
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