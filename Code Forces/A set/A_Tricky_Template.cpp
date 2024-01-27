#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==c[i]||b[i]==c[i]){
                // cout<<"NO"<<endl;
                // return;
                cnt++;
            }
        }
        if(cnt==n){
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
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