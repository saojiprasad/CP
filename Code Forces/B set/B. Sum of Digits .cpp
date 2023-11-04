#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    string ss=s;
    
    int count=0;
    while(ss.size()!=1){
        long long n=0;
        // cout<<ss.size()<<endl;
        for(int i=0;i<ss.size();i++){
            n+=ss[i]-'0';
        }
        ss=to_string(n);
        count++;
    }
    cout<<count<<endl;
}


int main(){
    solve();
}