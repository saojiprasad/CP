#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int mini=INT_MAX;
        int count=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            mini=min(mini,x);
            if(x==0){
                count++;
            }
        }
        
        ll prod=1;
        for(auto i:v){
            if(i==mini){
                prod*=(i+1);
                mini=0;
            }
            else{
                prod*=i;
            }
        }
        if(count>1){
            cout<<"0"<<endl;
        }
        else
        cout<<prod<<endl;
    }
}
int main(){
    solve();
}