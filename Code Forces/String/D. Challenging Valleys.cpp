#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int s=0;
        int e=v.size()-1;
        bool ans=false;
        int inc=0;
        int dec=0;
        for(int i=1;i<n;i++){
            if(v[i]>v[i-1]){
                inc++;
            }
            else if(v[i]<v[i-1]){
                dec++;
                if(inc>0){
                    ans=true;
                }
            }
        }
        if(ans==false){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}

int main(){
    solve();
}