#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int cnt=0;

        for(int i=0;i<(n-k+1);i++){
            bool flag=false;
            for(int j=i;j<(k+i);j++){
                if(arr[j]%2==1) flag=true;
                // cout<<arr[j]<<"   ";
            }
            // cout<<endl;
            if(flag){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}   