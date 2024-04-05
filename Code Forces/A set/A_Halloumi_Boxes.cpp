#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n,k;
        cin>>n>>k;
        int a[n];
        cin>>a[0];
        bool flag=false;
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(k==1&&a[i-1]>a[i]){
                flag=true;
            }
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

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