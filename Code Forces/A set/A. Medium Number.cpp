#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        ll a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        cout<<a[1]<<endl;
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