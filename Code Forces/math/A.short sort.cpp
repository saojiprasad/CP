#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string ss="abc";
        int count=0;
        for(int i=0;i<ss.size();i++){
            if(s[i]==ss[i]) count++;
        }
        if(count==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}


int main(){
    solve();
}