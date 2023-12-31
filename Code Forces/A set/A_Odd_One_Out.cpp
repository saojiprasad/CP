#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<(a^b^c)<<endl;
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