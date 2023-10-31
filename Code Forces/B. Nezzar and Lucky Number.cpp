#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int t;
    cin>>t;
   while(t--){
        int n,d;
        cin>>n>>d;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            bool flag=false;
            if(a[i]>=d*10){
                flag=true;
            }
            else{
                while(a[i]>=d){
                    if(a[i]%d==0){
                        flag=true;
                        break;
                    }
                    a[i]-=10;
                }
            }
            if(flag==true){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
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