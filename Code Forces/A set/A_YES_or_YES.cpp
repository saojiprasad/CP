#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        string s;
        cin>>s;
        if((s[0]=='y'||s[0]=='Y')&&(s[1]=='e'||s[1]=='E')&&(s[2]=='s'||s[2]=='S')){
            cout<<"YES"<<endl;
        }
        else{
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