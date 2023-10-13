#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        bool flag=false;
        int ans=0;
        while(n<m){
        // if(x.size()<s.size())
        if(x.find(s)!=string::npos){
            flag=true;
            break;
        }
        // cout<<"HI"<<"  ";
        x+=x;
        
        n*=2;
        ans++;
        }
        if(flag==true){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }


    }
}

int main(){
    solve();
}