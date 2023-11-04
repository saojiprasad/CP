#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int count=0;
        bool flag;
        for(int i=0;i<a;i+=b){
            flag=false;
            for(int j=i;j<i+b;j++){
                if(flag==false){
                if(s[j]=='B'){
                    count++;
                    // cout<<"HI"<<" ";
                    flag=true;
                }
                }
            }
        }
        cout<<count<<endl;
    }
}


int main(){
    solve();
}