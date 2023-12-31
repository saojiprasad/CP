#include<bits/stdc++.h>
#define ll long long int
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        vector<int>v(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }

        
        bool ans=false;
        unordered_set<ll>s;
        ll o=0,e=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                e+=v[i];
            }
            else{
                o+=v[i];
            }

            ll curr=e-o;

            if(curr==0 || s.find(curr)!=s.end()){
                ans=true;
                break;
            }
            s.insert(curr);
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
            // cout<<sum<<endl;
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