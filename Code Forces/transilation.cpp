#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int i=0;
    int l=t.length()-1;
    bool okay=1;
    while(i!=s.length()){
        if(s[i]!=t[l]){
            okay=0;
        }
        i++;
        l--;
    }
    if(okay==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
}