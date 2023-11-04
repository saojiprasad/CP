#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]==1){
                odd++;
            }
            else{
                even++;
            }
        }
        if(even==1&&odd!=2){
            if(odd%2==0){
                cout<<"YES"<<endl;
            }
            else{
                
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