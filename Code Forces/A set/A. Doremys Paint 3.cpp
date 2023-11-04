#include<bits/stdc++.h>
#define ll long long
using namespace std;
    
void solve(){
        int n;
        cin>>n;
        int a[2];
        int x=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }
        if(mp.size()>=3){
            cout<<"NO"<<endl;
            return;
        }
        if(mp.size()==1){
            cout<<"YES"<<endl;
            return;
        }
        int i=0;
        for(auto j:mp) {
        a[i++]=j.second;
        }
        if(abs(a[0]-a[1])>=2){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            return;
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