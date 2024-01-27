#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n,k;
        cin>>n>>k;
        
        string s="";
        for(int i=0;i<n;i++){
            int a=0;
            for(int j=0;j<k;j++){
                s+='a'+a;
                a++;
            }
        }
        cout<<s<<endl;

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