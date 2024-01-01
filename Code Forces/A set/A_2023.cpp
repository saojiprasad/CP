#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag=true;
        int num=0;
        ll pro=1;
       for(int i=0;i<n;i++){
        pro*=arr[i];
        // num=2023/arr[i];
       }
       if(2023%pro!=0) flag=false;
       num=2023/pro;
       if(flag){
        cout<<"YES"<<endl;
        cout<<num<<" ";
        for(int i=1;i<k;i++){
            cout<<1<<" ";
        }
        cout<<endl;
       }else{
        cout<<"NO"<<endl;
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